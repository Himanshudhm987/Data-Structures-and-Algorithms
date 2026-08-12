// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<iostream>
using namespace std;
void print(int n){
    // lines
    for(int i=1;i<=(2*n-1);i++){
        int vspace=2*(n-i);
        if (i>n) vspace=2*(i-n);
        int star=i;
        if(i>n) star=2*n-i;
        // for upper left triangle
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        // for spaces
        for(int j=1;j<=vspace;j++){
            cout<<" ";
        }
        // for upper right triangle
        for(int j=1;j<=star;j++){
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
