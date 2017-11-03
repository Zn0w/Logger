#include "logger.h"

void setUpLogger(Logger* logger, const char* configFilePath) {
    FILE* configFile;
    char currentChar;

    configFile = fopen(configFilePath, "r");

    if (configFile == NULL) {
        printf("Logger: Couldn't open a configuration file.\n");
        return;
    }

    currentChar = fgetc(configFile);
    while (currentChar != EOF) {
        printf("%c", currentChar);
        currentChar = fgetc(configFile);
    }

    fclose(configFile);
}

void writeLog(Logger* logger, LogLevel level, const char* message) {

}
