#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(int arr1[], int n1, int arr2[], int n2) {
    vector<int> result;
    vector<int> visit(n2, 0);
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j] && visit[j] == 0) {
                result.push_back(arr1[i]);
                visit[j] = 1;
                break;
            }
            if(arr2[j]>arr1[i]) break;
        }
    }
    return result;
}

int main() {
    int n1, n2;

    
    cin >> n1;
    int arr1[n1];
    
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    
    cin >> n2;
    int arr2[n2];
    
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    vector<int> ans = intersection(arr1, n1, arr2, n2);

    
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}