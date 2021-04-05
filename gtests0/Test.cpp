#include "gtest/gtest.h"
#include "../source/matrix.h"
#include "../source/utmatr4.h"
#include "pch.h"




TEST(TVector, can_add_three_vectors_with_equal_size)
{
    TVector<int> v(4);
    TVector<int> v1(4);
    TVector<int> v2(4);
    ASSERT_NO_THROW(v + v1 + v2);
}

TEST(TVector, cant_add_three_vectors_with_not_equal_size)
{
    TVector<int> v(4);
    TVector<int> v1(6);
    TVector<int> v2(9);
    ASSERT_ANY_THROW(v + v1 + v2);
}

TEST(TVector, compare_not_equal_vectors_return_false)
{
    TVector<int> v(4);
    TVector<int> v1(5);
    for (int i = 0; i < 4; i++)
    {
        v[i] = 10;
        v1[i] = 7;
    }
    EXPECT_FALSE(v == v1);
}

