#include "minunit.h"

MU_TEST(empty_test) {
    mu_assert(0 == 0, "Empty Test");
}

MU_TEST_SUITE(empty_suite) {
    MU_RUN_TEST(empty_test);
}

int main(void)
{
    MU_RUN_SUITE(empty_suite);

	MU_REPORT();
	return MU_EXIT_CODE;
}