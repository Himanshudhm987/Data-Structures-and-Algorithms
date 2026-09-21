
//  * Problem : Largest Element in an Array
//  *
//  * INPUT   : n        -> size of the array
//  *           nums[]   -> n integers
//  *
//  * RESULT  : the largest element of the array
//  *
//  * Example
//  *   Input  : 5
//  *            3 2 1 5 2
//  *   Output : Largest element: 5
//  */
 
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = 0;                       // index of the largest element so far
        for (int i = 0; i < nums.size(); i++) {
            if (nums[maxi] < nums[i]) {     // found a bigger value
                maxi = i;
            }
        }
        return nums[maxi];
    }
};
 
int main() {
    Solution sol;
 
    int n;
    cin >> n;
 
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
 
    cout << "Largest element: " << sol.largestElement(nums) << endl;
    return 0;
}
 