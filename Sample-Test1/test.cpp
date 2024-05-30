#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <string>

using namespace std;

TEST(SplitAndSumApplicationTest, split) {
	SimilarityChecker sc;
	int nScore = sc.checkLength("ASD", "DSA");
	EXPECT_EQ(nScore, 60);
}

