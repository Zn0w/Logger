#include "logger.h"

void log(const char* message, LogLevel level, const char* filepath, boolean console_output)
{
	time_t current_time;
	current_time = time(0);

	const char* s_level;
	if (level == TRACE)
		s_level = "TRACE";
	else if (level == DEBUG)
		s_level = "DEBUG";
	else if (level == INFO)
		s_level = "INFO ";
	else if (level == WARN)
		s_level = "WARN ";
	else if (level == ERROR)
		s_level = "ERROR";
	else if (level == FATAL)
		s_level = "FATAL";
	else
		s_level = " ";

	FILE* file;
	file = fopen(filepath, "a");
	fprintf(file, "%s   %.19s     %s\n", s_level, ctime(&current_time), message);
	fclose(file);

	if (console_output)
		printf("%s   %.19s     %s\n", s_level, ctime(&current_time), message);
}