#include "settingspack.hpp"

using pt::Server::Data::SettingsPack;

std::unordered_set<std::string>& SettingsPack::Names()
{
    static std::unordered_set<std::string> Cols =
    {
        "user_agent",
        "announce_ip",
        "handshake_client_version",
        "peer_fingerprint",
        "allow_multiple_connections_per_ip",
        "send_redundant_have",
        "use_dht_as_fallback",
        "upnp_ignore_nonrouters",
        "use_parole_mode",
        "auto_manage_prefer_seeds",
        "dont_count_slow_torrents",
        "close_redundant_connections",
        "prioritize_partial_pieces",
        "rate_limit_ip_overhead",
        "announce_to_all_tiers",
        "announce_to_all_trackers",
        "prefer_udp_trackers",
        "disable_hash_checks",
        "volatile_read_cache",
        "no_atime_storage",
        "incoming_starts_queued_torrents",
        "report_true_downloaded",
        "strict_end_game_mode",
        "enable_outgoing_utp",
        "enable_incoming_utp",
        "enable_outgoing_tcp",
        "enable_incoming_tcp",
        "no_recheck_incomplete_resume",
        "anonymous_mode",
        "report_web_seed_downloads",
        "seeding_outgoing_connections",
        "no_connect_privileged_ports",
        "smooth_connects",
        "always_send_user_agent",
        "apply_ip_filter_to_trackers",
        "ban_web_seeds",
        "allow_partial_disk_writes",
        "support_share_mode",
        "report_redundant_bytes",
        "listen_system_port_fallback",
        "announce_crypto_support",
        "enable_upnp",
        "enable_natpmp",
        "enable_lsd",
        "enable_dht",
        "prefer_rc4",
        "auto_sequential",
        "enable_ip_notifier",
        "dht_prefer_verified_node_ids",
        "dht_restrict_routing_ips",
        "dht_restrict_search_ips",
        "dht_extended_routing_table",
        "dht_aggressive_lookups",
        "dht_privacy_lookups",
        "dht_enforce_node_id",
        "dht_ignore_dark_internet",
        "dht_read_only",
        "piece_extent_affinity",
        "validate_https_trackers",
        "ssrf_mitigation",
        "allow_idna",
        "enable_set_file_valid_data",
        "tracker_completion_timeout",
        "tracker_receive_timeout",
        "stop_tracker_timeout",
        "tracker_maximum_response_length",
        "piece_timeout",
        "request_timeout",
        "request_queue_time",
        "max_allowed_in_request_queue",
        "max_out_request_queue",
        "whole_pieces_threshold",
        "peer_timeout",
        "urlseed_timeout",
        "urlseed_pipeline_size",
        "urlseed_wait_retry",
        "file_pool_size",
        "max_failcount",
        "min_reconnect_time",
        "peer_connect_timeout",
        "connection_speed",
        "inactivity_timeout",
        "unchoke_interval",
        "optimistic_unchoke_interval",
        "num_want",
        "initial_picker_threshold",
        "allowed_fast_set_size",
        "suggest_mode",
        "max_queued_disk_bytes",
        "handshake_timeout",
        "send_buffer_low_watermark",
        "send_buffer_watermark",
        "send_buffer_watermark_factor",
        "choking_algorithm",
        "seed_choking_algorithm",
        "disk_io_write_mode",
        "disk_io_read_mode",
        "outgoing_port",
        "peer_tos",
        "active_downloads",
        "active_seeds",
        "active_checking",
        "active_dht_limit",
        "active_tracker_limit",
        "active_lsd_limit",
        "active_limit",
        "auto_manage_interval",
        "seed_time_limit",
        "auto_scrape_interval",
        "auto_scrape_min_interval",
        "max_peerlist_size",
        "max_paused_peerlist_size",
        "min_announce_interval",
        "auto_manage_startup",
        "seeding_piece_quota",
        "max_rejects",
        "recv_socket_buffer_size",
        "send_socket_buffer_size",
        "max_peer_recv_buffer_size",
        "read_cache_line_size",
        "write_cache_line_size",
        "optimistic_disk_retry",
        "max_suggest_pieces",
        "local_service_announce_interval",
        "dht_announce_interval",
        "udp_tracker_token_expiry",
        "num_optimistic_unchoke_slots",
        "max_pex_peers",
        "tick_interval",
        "share_mode_target",
        "upload_rate_limit",
        "download_rate_limit",
        "dht_upload_rate_limit",
        "unchoke_slots_limit",
        "connections_limit",
        "connections_slack",
        "utp_target_delay",
        "utp_gain_factor",
        "utp_min_timeout",
        "utp_syn_resends",
        "utp_fin_resends",
        "utp_num_resends",
        "utp_connect_timeout",
        "utp_loss_multiplier",
        "mixed_mode_algorithm",
        "listen_queue_size",
        "torrent_connect_boost",
        "alert_queue_size",
        "max_metadata_size",
        "hashing_threads",
        "checking_mem_usage",
        "predictive_piece_announce",
        "aio_threads",
        "tracker_backoff",
        "share_ratio_limit",
        "seed_time_ratio_limit",
        "peer_turnover",
        "peer_turnover_cutoff",
        "peer_turnover_interval",
        "connect_seed_every_n_download",
        "max_http_recv_buffer_size",
        "max_retry_port_bind",
        "alert_mask",
        "out_enc_policy",
        "in_enc_policy",
        "allowed_enc_level",
        "inactive_down_rate",
        "inactive_up_rate",
        "urlseed_max_request_bytes",
        "web_seed_name_lookup_retry",
        "close_file_interval",
        "utp_cwnd_reduce_timer",
        "max_web_seed_connections",
        "resolver_cache_timeout",
        "send_not_sent_low_watermark",
        "rate_choker_initial_threshold",
        "upnp_lease_duration",
        "max_concurrent_http_announces",
        "dht_max_peers_reply",
        "dht_search_branching",
        "dht_max_fail_count",
        "dht_max_torrents",
        "dht_max_dht_items",
        "dht_max_peers",
        "dht_max_torrent_search_reply",
        "dht_block_timeout",
        "dht_block_ratelimit",
        "dht_item_lifetime",
        "dht_sample_infohashes_interval",
        "dht_max_infohashes_sample_count",
        "max_piece_count",
    };

    return Cols;
}
