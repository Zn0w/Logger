#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

struct Logger; // declare a variables

struct Logger* createLogger();
void writeLog(int level, char* message);

#endif // LOGGER_H
