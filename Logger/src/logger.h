#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>
#include <time.h>

enum LogLevel
{
	TRACE = 1,
	DEBUG,
	INFO,
	WARN,
	ERROR,
	FATAL
};

enum boolean
{
	false,
	true
};

typedef enum LogLevel LogLevel;
typedef enum boolean boolean;

//LogLevel preference = 0;

void log(const char*, LogLevel, const char*, boolean);

#endif // LOGGER_H