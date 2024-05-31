#include <string>
#include <set>

using namespace std;

class SimilarityChecker {
public:

	int getLengthScore(const string input1, const string input2) {
		double A = (input1.length() > input2.length()) ? input1.length() : input2.length();
		double B = (input1.length() > input2.length()) ? input2.length() : input1.length();
		double Gap = A - B;
		return max((int)((1 - (Gap / B)) * 60), 0);
	}

	int getAlphaScore(const string input1, const string input2) {
		set<char> set1(input1.begin(), input1.end());
		set<char> set2(input2.begin(), input2.end());
		int totalCnt = set1.size() + set2.size();
		int sameCnt = 0;
		
		sameCnt += getIncludeAlphabetCnt(set1, set2);
		sameCnt += getIncludeAlphabetCnt(set2, set1);

		return sameCnt * 40 / totalCnt;
	}

	int getIncludeAlphabetCnt(const set<char> set1, const set<char> set2)
	{
		int sameCnt = 0;
		for (const char& c : set1) {
			if (set2.find(c) != set2.end()) {
				sameCnt++;
			}
		}
		return sameCnt;
	}

};
