#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <time.h>

enum boolean {
    FALSE,
    TRUE
};
typedef enum boolean boolean;

enum LogLevel {
    TRACE = 1,
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    FATAL
};

typedef enum LogLevel LogLevel;

struct LoggerStr {
    LogLevel preferredLevel; // 0 if none
    boolean printToConsole;
    FILE* logFile;
};

typedef struct LoggerStr Logger;

Logger setUpLogger(void);
void writeLog(Logger* logger, LogLevel level, const char* message);

#endif // LOGGER_H
