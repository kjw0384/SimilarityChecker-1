#include <string>

using namespace std;

class SimilarityChecker {
public:
	int getLengthScore(const string input1, const string input2) {
		if (input1.length() == input2.length())
			return 60;
		else if (input1.length() >= 2 * input2.length() ||
			input2.length() >= 2 * input1.length())
			return 0;
		else {
			int A = 0;
			int B = 0;
			A = (input1.length() > input2.length()) ? input1.length() : input2.length();
			B = (input1.length() > input2.length()) ? input2.length() : input1.length();
			double Gap = A - B;
			return (int)((1 - ((double)Gap / B)) * 60);
		}
		return 0;
	}
};
