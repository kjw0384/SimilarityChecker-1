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

TEST(SimilarityCheckerTest, alphaAllDiff) {
	SimilarityChecker sc;
	int nScore = sc.getAlphaScore("A", "BB");
	EXPECT_EQ(nScore, 0);
}

TEST(SimilarityCheckerTest, alphaDiffSome) {
	SimilarityChecker sc;
	int nScore = sc.getAlphaScore("AA", "AAE");
	EXPECT_EQ(nScore, 2 * 40 / 3);
}
