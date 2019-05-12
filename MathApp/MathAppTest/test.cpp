#include "pch.h"
#include "../MathApp/operation.cpp"
#include "../MathApp/factorial.cpp"
#include "../MathApp/combination.cpp"
TEST(OperationTest, operations) {
	EXPECT_EQ(6, Mul(2,3));
	EXPECT_EQ(1, Min(2,1));
	EXPECT_EQ(-1, Min(1, 2));
	EXPECT_EQ(3, Add(2,1));
	EXPECT_EQ(-3, Div(-10, 3));

}
TEST(FactorialTest, Factorial){
	EXPECT_EQ(24, Factorial(4));
	EXPECT_EQ(720, Factorial(6));

}
TEST(CombinationTest, Combination) {
	EXPECT_EQ(6, Combination(4,2));
	EXPECT_EQ(35, Combination(7, 3));
}
