// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<iostream>
using namespace std;
void print(int n){
    // lines
    for(int i=0;i<n;i++){
        // for upper left triangle star
        for(int j=n-i;j>=1;j--){
            cout<<"*";
        }
        // For spaces
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        // upper right triangle
        for(int j=n-i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        // for down rigth triangle 
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        // for spaces
        for(int j=0;j<(2*n-2*i-2);j++){
            cout<<" ";
        }
        // for down left triangle
        
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}
