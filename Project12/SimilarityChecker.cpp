#include <string>

using namespace std;

class SimilarityChecker {
public:
	int getLengthScore(const string input1, const string input2) {
		double A = (input1.length() > input2.length()) ? input1.length() : input2.length();
		double B = (input1.length() > input2.length()) ? input2.length() : input1.length();
		double Gap = A - B;
		return max((int)((1 - (Gap / B)) * 60), 0);
	}
};
