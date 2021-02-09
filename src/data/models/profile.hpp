#pragma once

#include <memory>
#include <string>

#include <sqlite3.h>

namespace pt::Server::Data::Models
{
    class Profile
    {
    public:
        static std::shared_ptr<Profile> GetActive(sqlite3* db);

        int Id() { return m_id; }
        std::string& Name() { return m_name; }
        bool IsActive() { return m_isActive; }
        std::string Description() { return m_desc; }
        int SettingsPackId() { return m_settingsPackId; }
        std::string& SettingsPackName() { return m_settingsPackName; }

    private:
        explicit Profile() {}

        int m_id;
        std::string m_name;
        std::string m_desc;
        bool m_isActive;
        int m_settingsPackId;
        std::string m_settingsPackName;
    };
}