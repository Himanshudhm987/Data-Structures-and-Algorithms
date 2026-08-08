// Count all numbers of a digit


#include <iostream>
using namespace std;
int digit(int n){
    int r;
    int count =0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<digit(n);
    return 0;
}