// Reverse of a number

#include<iostream>
using namespace std;
int  reverse(int n){
    int r;
    int sum=0;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int  main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}