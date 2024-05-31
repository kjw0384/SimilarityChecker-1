#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <string>

using namespace std;

TEST(SimilarityCheckerTest, lengthSame) {
	SimilarityChecker sc;
	int nScore = sc.getLengthScore("ASD", "DSA");
	EXPECT_EQ(nScore, 60);
}

TEST(SimilarityCheckerTest, lengthGE2Legnth) {
	SimilarityChecker sc;
	int nScore = sc.getLengthScore("A", "BB");
	EXPECT_EQ(nScore, 0);
}

TEST(SimilarityCheckerTest, lengthLT2Length1) {
	SimilarityChecker sc;
	int nScore = sc.getLengthScore("AAABB", "BBA");
	EXPECT_EQ(nScore, 20);
}
