// 121
// Not a prime number 
// 11
// Prime number 


#include<iostream>
using namespace std;
void prime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i) count++;
        }
    }
    if(count==2) cout<<"Prime number ";
    else cout<<"Not a prime number ";
}
int main(){
    int n;
    cin>>n;
    prime(n);
    return 0;
}