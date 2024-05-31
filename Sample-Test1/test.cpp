#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <string>

using namespace std;

TEST(SimilarityCheckerTest, samelength) {
	SimilarityChecker sc;
	int nScore = sc.getLengthScore("ASD", "DSA");
	EXPECT_EQ(nScore, 60);
}

TEST(SimilarityCheckerTest, difflength2) {
	SimilarityChecker sc;
	int nScore = sc.getLengthScore("A", "BB");
	EXPECT_EQ(nScore, 0);
}
