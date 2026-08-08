//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA

#include<iostream>
using namespace std;

void print(int n){
    // For lines
    for(int i=1;i<=n;i++){
        // Spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // for alphabet
        char ch='A';
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<i){
                ch++;
            }
            else{
                ch--;
            }
        }
        // For spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}