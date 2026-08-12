// OLd method
#include<iostream>
using namespace std;
// void prime(int n){
//     for (int i=1;i<=n;i++){
//         if(n%i==0) cout<<i<<" ";
//     }
// }

// New method 
void prime2(int n){
    for(int i=1;i*i<=n;i++){
        if (n%i==0) {
            cout<<i<<" ";
            if((n/i)!=i){
                cout<<(n/i)<<" ";
            }
        } 
        
    }
}
int main(){
    int n;
    cin >> n;
    prime2(n);
    return 0;
}
