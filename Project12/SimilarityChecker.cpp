#include <vector>
#include <string>
#include <set>
using namespace std;

class SimilarityChecker {
public:
	int getAlphaScore(const string input1, const string input2) {
		
		int totalCnt = input1.length() + input2.length();
		int sameCnt = 0;
		
		sameCnt += getIncludeAlphabetCnt(input1, input2);
		sameCnt += getIncludeAlphabetCnt(input2, input1);

		return sameCnt * 40 / totalCnt;

		return 40;
	}

	int getIncludeAlphabetCnt(const string inputstr, const string refstr)
	{
		int sameCnt = 0;
		for (int inputStrIdx = 0; inputStrIdx < inputstr.length(); inputStrIdx++)
		{
			for (int refStrIdx = 0; refStrIdx < refstr.length(); refStrIdx++)
			{
				if (inputstr[inputStrIdx] == refstr[refStrIdx])
				{
					sameCnt++;
					break;
				}
			}
		}
		return sameCnt;
	}
};
