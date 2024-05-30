#include <string>

using namespace std;

class SimilarityChecker {
public:
	int checkLength(const string a, const string b) {
		if (a.length() == b.length())
			return 60;
		return 0;
	}
};
