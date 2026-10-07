#include <bits/stdc++.h>
using namespace std;

set<int> unionArr(vector<int>& nums1, vector<int>& nums2){
    set<int> st;
    int n1 = nums1.size();
    int n2 = nums2.size();
    for(int i = 0; i < n1; i++){
        st.insert(nums1[i]);
    }
    for(int i = 0; i < n2; i++){
        st.insert(nums2[i]);
    }
    return st;
}

int main(){
    int n1, n2;
    cin >> n1;
    vector<int> nums1(n1);
    for(int i = 0; i < n1; i++) cin >> nums1[i];

    cin >> n2;
    vector<int> nums2(n2);
    for(int i = 0; i < n2; i++) cin >> nums2[i];

    set<int> result = unionArr(nums1, nums2);

    for(int x : result) cout << x << " ";
    cout << endl;
    return 0;
}