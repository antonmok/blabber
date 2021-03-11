#pragma once

#include <glog/logging.h>

#define GLOG_AUTO_CLEAN_AFTER_DAYS  30  // keep your logs for 30 days

inline void InitLogger(char** argv)
{
    // Initialize Google’s logging library.
#ifdef NDEBUG
    FLAGS_logtostderr = 0;
#else
    FLAGS_logtostderr = 1;
#endif
    google::InitGoogleLogging(argv[0]);
    google::EnableLogCleaner(GLOG_AUTO_CLEAN_AFTER_DAYS);
}
