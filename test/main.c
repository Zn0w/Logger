#include "../src/logger.h"

int main() {
    Logger logger;
    logger.preferredLevel = TRACE;
    setUpLogger(&logger, "d://c dev/Logger/test/config.txt");

    return 0;
}
