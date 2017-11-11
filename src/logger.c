#include "logger.h"

#define concat(first, second, third) first second third

Logger setUpConsoleLogger(int prefferedLevel) {
    Logger logger;

    logger.printToConsole = TRUE;
    logger.preferredLevel = prefferedLevel;
    logger.logFilePath = "";

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

    return logger;
}

void writeLog(Logger* logger, LogLevel level, const char* message) {
    time_t currentTime;
    currentTime = time(NULL);

    const char* stringLevel;
    if (level == TRACE)
        stringLevel = "TRACE   ";
    else if (level == DEBUG)
        stringLevel = "DEBUG   ";
    else if (level == INFO)
        stringLevel = "INFO    ";
    else if (level == WARNING)
        stringLevel = "WARNING ";
    else if (level == ERROR)
        stringLevel = "ERROR   ";
    else if (level == FATAL)
        stringLevel = "FATAL   ";
    else
        stringLevel = " ";

    if (level >= logger->preferredLevel) {
        if (logger->printToConsole == TRUE)
            printf("%s%s%s", stringLevel, message,ctime(&currentTime));

        if (strcmp(logger->logFilePath, "")) {
            FILE* logFile = fopen(logger->logFilePath, "a");
            if (logFile == NULL)
                printf("Logger: Couldn't open the logger file.\n");
            else {
                fputs(stringLevel, logFile);
                fputs(message, logFile);
                fputs(ctime(&currentTime), logFile);
            }
            fclose(logFile);
        }
    }
}

/*static void writeToFile() {

}*/
