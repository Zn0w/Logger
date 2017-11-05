#include "../src/logger.h"

int main() {
    Logger logger = setUpFileLogger(0, "d://c dev/Logger/test/log.txt");
    writeLog(&logger, INFO, "Initialization");

    return 0;
}
