#include "fib.h"
#include "gtest/gtest.h"

TEST(FibTest, Nominal) {
	Fibonacci f;
	EXPECT_EQ(1, f.get(1));
	EXPECT_EQ(1, f.get(2));
	EXPECT_EQ(5, f.get(5));
	EXPECT_EQ(13, f.get(7));

	//Off-Nominal
	EXPECT_EQ(0, f.get(0));
	EXPECT_EQ(0, f.get(-1));
}
