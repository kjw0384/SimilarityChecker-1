#include <string>

using namespace std;

class SimilarityChecker {
public:
	int getLengthScore(const string input1, const string input2) {
		int length1 = input1.length();
		int length2 = input2.length();

		if (length1 == length2)
			return 60;
		else if (length1 >= 2 * length2 ||
			length2 >= 2 * length1)
			return 0;
		else {
			double A = (length1 > length2) ? length1 : length2;
			double B = (length1 > length2) ? length2 : length1;
			double Gap = A - B;
			return (int)((1 - (Gap / B)) * 60);
		}
		return 0;
	}
};
