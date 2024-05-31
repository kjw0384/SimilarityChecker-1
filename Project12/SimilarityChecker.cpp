#include <vector>
#include <string>
#include <set>
using namespace std;

class SimilarityChecker {
public:
	int getAlphaScore(const string input1, const string input2) {
		
		int totalCnt = input1.length() + input2.length();
		int sameCnt = 0;
		
		for (int i = 0; i < input1.length(); i++)
		{
			for (int j = 0; j < input2.length(); j++)
			{
				if (input1[i] == input2[j])
				{
					sameCnt++;
					break;
				}
			}
		}

		for (int i = 0; i < input2.length(); i++)
		{
			for (int j = 0; j < input1.length(); j++)
			{
				if (input2[i] == input1[j])
				{
					sameCnt++;
					break;
				}
			}
		}

		return sameCnt * 40 / totalCnt;

		return 40;
	}
};
