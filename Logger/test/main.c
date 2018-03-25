#include "../src/logger.h"

void do_test();

int main() {
	log("Calling do_test function", TRACE, "test.log", true);
	do_test();

	getchar();

	return 0;
}

void do_test()
{
	log("do_test is started", INFO, "test.log", true);
	
	log("Init variables", DEBUG, "test.log", true);
	int a = 5;
	int b = 10;
	int c;

	log("Performing multiplication", DEBUG, "test.log", true);
	c = a * b;

	log("do_test have been performed", INFO, "test.log", true);
}