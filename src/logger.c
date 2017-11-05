#include "logger.h"

Logger setUpConsoleLogger(int prefferedLevel) {
    Logger logger;

    logger.printToConsole = TRUE;
    logger.preferredLevel = prefferedLevel;

    return logger;
}

Logger setUpFileLogger(int prefferedLevel, const char* logFilePath) {
    Logger logger;

    logger.printToConsole = FALSE;
    logger.preferredLevel = prefferedLevel;
    logger.logFilePath = logFilePath;

    return logger;
}

Logger setUpFullLogger(int prefferedLevel, const char* logFilePath) {
    Logger logger;

    logger.printToConsole = TRUE;
    logger.preferredLevel = prefferedLevel;
    logger.logFilePath = logFilePath;

    //logger.logFile = fopen(logFilePath, "w");
    //if (logger.logFile == NULL)
        //printf("Logger: Couldn't open the logger file.\n");

    return logger;
}

void writeLog(Logger* logger, LogLevel level, const char* message) {

}

void analyseConfigKey(Logger* logger, const char* key) {
    printf("%s", key);
}
