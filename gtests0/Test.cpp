#include "gtest/gtest.h"
#include "../source/matrix.h"
#include "../source/utmatrix.h"
#include "pch.h"





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

