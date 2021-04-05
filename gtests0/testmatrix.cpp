#include "pch.h"
#include "../source/utmatr4.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

}

TEST(TMatrix, can_subtract_matrices_with_equal_size)
{
    TMatrix<int> m(4);
    TMatrix<int> m1(4);
    ASSERT_NO_THROW(m - m1);
}

TEST(TMatrix, cant_subtract_matrixes_with_not_equal_size)
{
    TMatrix<int> m(4);
    TMatrix<int> m1(5);
    ASSERT_ANY_THROW(m - m1);
}


TEST(TMatrix, can_add_three_matrices_with_equal_size)
{
    TMatrix<int> m(4);
    TMatrix<int> m1(4);
    TMatrix<int> m2(4);
    ASSERT_NO_THROW(m + m1 + m2);
}

TEST(TMatrix, cant_add_three_matrices_with_not_equal_size)
{
    TMatrix<int> m(4);
    TMatrix<int> m1(5);
    TMatrix<int> m2(9);
    ASSERT_ANY_THROW(m + m1 + m2);
}

TEST(TMatrix, can_subtract_three_matrices_with_equal_size)
{
    TMatrix<int> m(4);
    TMatrix<int> m1(4);
    TMatrix<int> m2(4);
    ASSERT_NO_THROW(m - m1 - m2);
}

TEST(TMatrix, cant_subtract_three_matrices_with_not_equal_size)
{
    TMatrix<int> m(4);
    TMatrix<int> m1(5);
    TMatrix<int> m2(9);
    ASSERT_ANY_THROW(m - m1 - m2);
}

TEST(TVector, compare_not_equal_matrices_return_false)
{
    TVector<int> m(4);
    TVector<int> m1(4);
    m = 5; m1 = 10;
    EXPECT_FALSE(m == m1);
}