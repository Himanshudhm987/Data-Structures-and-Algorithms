// 9 12 INPUT 
// OUTPUT
// GCD 1 :3
// GCD 2 :3
// GCD 3:3

#include<iostream>
using namespace std;
// Worst case   
void gcd1(int n1,int n2){
    int gcd=0;
    for(int i=1;i<=min(n1,n2);i++){
        if((n1%i==0)&& (n2%i==0)) gcd=i;
    }
    cout<<"GCD 1 :"<<gcd<<endl;
}

// Best Case
void gcd2(int n1,int n2){
    int gcd=0;
    for(int i=min(n1,n2);i>=1;i--){
        if((n1%i==0)&& (n2%i==0)) {cout<<"GCD 2 :"<<i<<endl; break;}
    }
}

// Equilideam Algorithm 
void gcd3(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<"GCD 3:"<< b<<endl;
    else cout<<"GCD 3 :"<<a<<endl;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    gcd1(n1,n2);
    gcd2(n1,n2);
    gcd3(n1,n2);
    return 0;
}