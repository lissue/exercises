#include <iostream>
using namespace std;

class Solution {
public:
    void reverse(int arr[], int len) {
        int i=0;
        int tmp;
        while (i<len/2) {
            tmp = arr[i];
            arr[i] = arr[len-1-i];
            arr[len-1-i] = tmp;
            i++;
        }
	}
};

int main() {
    Solution s;
    int arr[] = {1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    s.reverse(arr, len);
    for (int i=0; i<len; i++) cout << arr[i] << endl;
    return 0;
}