// 1      1
// 12    21
// 123  321
// 12344321


#include <iostream>
using namespace std;
void print(int n)
{
    // for lines
    for (int i = 1; i <= n;i++){
        // for numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // for spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        // for numbers 
        for(int j=i;j>=1;j--){
            cout<<j;
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