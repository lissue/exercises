//g++ twosum.cpp -o twosustd=c++11

#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> twoSum(const vector<int> &numbers, int target) {
        unordered_set<int> comp;
        vector<int> res;
        int i=0;
        for (int value:numbers) {
            i++;
            if (comp.find(value)!=comp.end()) {
                res.push_back(value); //value
                // res.push_back(i-1); //index
                res.push_back(target-value);
                return res;
            }
            comp.insert(target-value);
        }
        return {0};
    }
};

int main() {
    Solution s;
    int target=5;
    vector<int> numbers={8,2,3,4};
    vector<int> res = s.twoSum(numbers, target);
    for (int i=0; i<res.size(); i++) {
        cout << res[i];
        if (res.size()-1 != i) cout << "+";
    }
    cout << "=" << target << endl;
    return 0;
}