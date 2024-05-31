#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <vector>
#include <string>

using namespace std;

TEST(SimilarityCheckerTest, alphaEqual) {
	SimilarityChecker sc;
	int nScore = sc.getAlphaScore("ASD", "DSA");
	EXPECT_EQ(nScore, 40);
}

