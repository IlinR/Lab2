#include "gtest/gtest.h"
#include "utmatrix.h"


TEST(TMatrix, can_sum_matrices_with_equal_size)
{
	TMatrix<int> t(5), tp(5), tpm(5);
	for (int i = 0; i < t.GetSize(); i++)
	{
		for (int j = i; j < t.GetSize(); j++)
		{
			t[i][j] = i;
			tp[i][j] = t.GetSize() - i;
			tpm[i][j] = t.GetSize();
		}
	}
	EXPECT_EQ(tpm, t + tp);
}



TEST(TMatrix, can_subtract_matrices_with_equal_size)
{
	TMatrix<int> t(5), tp(5), tpm(5);
	for (int i = 0; i < t.GetSize(); i++)
	{
		for (int j = i; j < t.GetSize(); j++)
		{
			t[i][j] = i;
			tp[i][j] = i;
		}
	}
	EXPECT_EQ(tpm, t - tp);
}