// Armstrong number check 
#include<iostream>
using namespace std;
bool armstrong(int n){
    int r,num;
    int cal=0;
    num=n;
    while(n>0){
        r=n%10;
        cal=cal+(r*r*r);
        n=n/10;
    }
    if (num==cal) return true;
    else return false;
}
int main(){
    int n;
    cin>>n;
    if (armstrong(n)) cout<<"Armstrong number "<<n;
    else cout<<"Not a armstrong number "<<n;
    return 0;

}