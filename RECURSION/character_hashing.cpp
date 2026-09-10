// how many chaacters are present in array 
// ababsgdfh
// 5
// a
// b
// c
// g
// f
// 2
// 2
// 0
// 1
// 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<hash[ch-'a']<<endl;
    }
}
