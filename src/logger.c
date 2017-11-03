#include "logger.h"

Logger setUpLogger(void) {
    Logger logger;
    return logger;
}

void writeLog(Logger* logger, LogLevel level, const char* message) {

}

void analyseConfigKey(Logger* logger, const char* key) {
    printf("%s", key);
}
