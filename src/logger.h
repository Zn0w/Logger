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
    const char* logFilePath;
};

typedef struct LoggerStr Logger;

Logger setUpConsoleLogger(int prefferedLevel);
Logger setUpFileLogger(int prefferedLevel, const char* logFilePath);
Logger setUpFullLogger(int prefferedLevel, const char* logFilePath);

void writeLog(Logger* logger, LogLevel level, const char* message);

#endif // LOGGER_H
