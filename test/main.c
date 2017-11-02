#include "../src/logger.h"

int main() {
    Logger logger;
    logger.preferredLevel = TRACE;
    setUpLogger(&logger, "yeah");

    return 0;
}
