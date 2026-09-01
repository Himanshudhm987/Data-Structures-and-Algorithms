#include<bits/stdc++.h>
using namespace std;
// int func(int n){
//     if(n<=0) return 0;
//     return n+func(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<func(n);
//     return 0;
// }

void func(int sum,int n){
    if(n<=0) {
    cout<<sum;
    return ;
}
    sum+=n;
    func(sum,n-1);
}
int main(){
    int n,sum=0;
    cin>>n;
    func(sum,n);
    return 0;
}