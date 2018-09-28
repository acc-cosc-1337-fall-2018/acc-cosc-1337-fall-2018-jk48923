#include "invoice_detail.h"

TEST_CASE("Test const and units")
{
	REQUIRE(get_extended_cost("10") == 100)
}

