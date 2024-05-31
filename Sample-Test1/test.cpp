#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <string>

using namespace std;

class SimilarityCheckerFixture : public testing::Test {
public:
	SimilarityChecker sc;

	void checkLengthScore(const string str1, const string str2, int expectedScore)
	{
		EXPECT_EQ(sc.getLengthScore(str1, str2), expectedScore);
	}
};

TEST_F(SimilarityCheckerFixture, lengthSame) {
	checkLengthScore("ASD", "DSA", 60);
}

TEST_F(SimilarityCheckerFixture, lengthGE2Legnth) {
	checkLengthScore("A", "BB", 0);
}

TEST_F(SimilarityCheckerFixture, lengthLT2Length1) {
	checkLengthScore("AAABB", "BBA", 20);
}

TEST_F(SimilarityCheckerFixture, lengthLT2Length2) {
	checkLengthScore("AA", "AAE", 30);
}

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
