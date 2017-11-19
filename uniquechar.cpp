#include <iostream>
using namespace std;

class Solution {
public:
    static bool isUniqueChars2(string str) {
	    bool char_set[256];
        for (int i = 0; i < str.length(); i++) {
            int val = str[i];
            cout << i << "," << val << "," << char_set[val] << "," << endl;
            if (char_set[val]) return false;
            char_set[val] = true;
	    }
	return true;
    }
};

int main() {
    Solution s;
    cout << s.isUniqueChars2("asdf") << endl;
    return 0;
}