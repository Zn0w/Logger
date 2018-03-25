#ifndef LOGGER_H
#define LOGGER_H

enum LogLevel
{
	TRACE = 1,
	DEBUG,
	INFO,
	WARN,
	ERROR,
	FATAL
};

typedef enum LogLevel LogLevel;

LogLevel preference = 0;

void console_log(const char*, LogLevel);

void file_log(const char*, LogLevel, const char*);

void log(const char*, LogLevel, const char*);

#endif // LOGGER_H