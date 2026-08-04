//     *    
//    ***   
//   *****  
//  ******* 
// *********

#include <iostream>
using namespace std;
void print(int n)
{
    // lines
    for (int i = 1; i<= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // Stars
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout << "*";
        }
        // Space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}