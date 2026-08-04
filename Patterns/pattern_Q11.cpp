// 1
// 01
// 101
// 0101
// 10101

#include <iostream>
using namespace std;
int star=1;
void print(int n)
{
    for(int i=0;i<n;i++){
        if(i%2==0) star=1;
        else star=0;
        for(int j=0;j<=i;j++){
            cout<<star;
            star=1-star;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}
