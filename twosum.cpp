//g++ twosum.cpp -o twosustd=c++11

#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool twoSum(const vector<int> &numbers, int target) {
        unordered_set<int> comp;
        int i=0;
        for (int value:numbers) {
            if (comp.find(value)!=comp.end()) {
                return true;
            }
            comp.insert(target-value);
        }
        return false;
    }
};

int main() {
    Solution s;
    bool res = s.twoSum({2,3,4},6);
    cout << res;
    return 0;
}