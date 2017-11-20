#include <iostream>
#include <cstring>
using namespace std;

class Solution {
public:
    void removeDuplicatesEff(char str[]) {
        if (str == NULL) return;
        int len = strlen(str);
        if (len < 2) return;
        bool hit[256];
        
        for (int i = 0; i < 256; ++i) {
            hit[i] = false;
        }
        
        hit[str[0]] = true;
		int tail = 1;
        
        for (int i = 1; i < len; ++i) {
            if (!hit[str[i]]) {
                str[tail] = str[i];
                ++tail;
                hit[str[i]] = true;
            }
        }
        str[tail] = 0;
    }
};

int main() {
    Solution s;
    char str[]="fabbbbcdeffffeeegzzzzzzzzzz";
    s.removeDuplicatesEff(str);
    cout << str << endl;
    return 0;
}