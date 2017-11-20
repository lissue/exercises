#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool insertvalue(int arr[], int value, int len) {
        if (arr[len-1]!=0) return false;

        int i = len-2;
        while (i>=0) {
            if (arr[i]>value) {
                arr[i+1]=arr[i];
                arr[i]=value;
            }
            i--;
        }
        return true;
    }
};

int main() {
    Solution s;
    int arr[]={1,2,3,4,7,7,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    bool newnumbers = s.insertvalue(arr,1,len);
    for (int i=0; i<len; i++) {
        cout << arr[i] << ",";
    }        
    cout << endl;
    return 0;
}