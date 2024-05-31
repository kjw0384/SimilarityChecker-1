#include "pch.h"
#include "../Project12/SimilarityChecker.cpp"
#include <string>

using namespace std;

class SimilarityCheckerFixture : public testing::Test{
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
