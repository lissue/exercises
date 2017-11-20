#include <iostream>
using namespace std;

class Solution {
public:
    void reverse(char str[]) {
        char * end = str;
        char tmp;
        if (str) {
            while (*end) {
                ++end;
            }
        }
        --end;
		while (str < end) {
		    tmp = *str;
			*str++ = *end;
			*end-- = tmp;
        }
	}
};

int main() {
    Solution s;
    char str[]="sadfsdf sdf";
    s.reverse(str);
    cout << str << endl;
    return 0;
}