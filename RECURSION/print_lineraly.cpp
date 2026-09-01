// 1 2 3 4 5 

#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(n<1) return;
    cout<<i<<" ";
    f(i+1,n-1);
}
int main(){
    int n;
    cin>>n;
    f(1,n);
    return 0;
}
