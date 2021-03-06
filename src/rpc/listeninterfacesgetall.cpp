#include "listeninterfacesgetall.hpp"

#include <boost/log/trivial.hpp>

#include "../data/datareader.hpp"
#include "../data/sqliteexception.hpp"

using json = nlohmann::json;
using pt::Server::Data::SQLiteException;
using pt::Server::RPC::ListenInterfacesGetAllCommand;

ListenInterfacesGetAllCommand::ListenInterfacesGetAllCommand(sqlite3* db)
    : m_db(db)
{
}

json ListenInterfacesGetAllCommand::Execute(json& params)
{
    json result = json::array();

    sqlite3_stmt* stmt;
    int res = sqlite3_prepare_v2(
        m_db,
        "SELECT id,host,port,is_local,is_outgoing,is_ssl FROM listen_interfaces ORDER BY id ASC",
        -1,
        &stmt,
        nullptr);

    if (res != SQLITE_OK)
    {
        BOOST_LOG_TRIVIAL(error) << "Error when querying for listen interfaces: " << sqlite3_errmsg(m_db);
        throw SQLiteException();
    }

    while ((res = sqlite3_step(stmt)) == SQLITE_ROW)
    {
        json item =
        {
            { "id",   sqlite3_column_int(stmt, 0) },
            { "host", pt_sqlite3_column_std_string(stmt, 1).value() },
            { "port", sqlite3_column_int(stmt, 2) }
        };

        result.push_back(item);
    }

    sqlite3_finalize(stmt);

    return Ok(result);
}
