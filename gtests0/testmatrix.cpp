#include "pch.h"
#include "../source/utmatrix.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}





TEST(TVector, compare_not_equal_matrices_return_false)
{
    TVector<int> m(4);
    TVector<int> m1(4);
    m = 5; m1 = 10;
    EXPECT_FALSE(m == m1);
}