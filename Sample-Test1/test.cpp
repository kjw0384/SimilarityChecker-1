#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <string>

using namespace std;

TEST(SimilarityCheckerTest, samelength) {
	SimilarityChecker sc;
	int nScore = sc.getLengthScore("ASD", "DSA");
	EXPECT_EQ(nScore, 60);
}

