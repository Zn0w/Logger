#include "logger.h"

void log(const char* message, LogLevel level, const char* filepath, boolean console_output)
{
	time_t current_time;
	current_time = time(0);

	printf("Current time: %.19s", ctime(&current_time));
}