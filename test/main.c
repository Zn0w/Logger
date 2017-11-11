#include "../src/logger.h"

int main() {
    Logger logger = setUpFullLogger(0, "d://c dev/Logger/test/log.txt");
    writeLog(&logger, TRACE, "starting the function   ");
    writeLog(&logger, DEBUG, "loop starting   ");
    writeLog(&logger, INFO, "Initialization   ");
    writeLog(&logger, WARNING, "memory leak   ");
    writeLog(&logger, ERROR, "couldn't find any more space   ");
    writeLog(&logger, FATAL, "buffer overflow   ");

    return 0;
}
