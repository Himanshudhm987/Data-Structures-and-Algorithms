// 50
// 40
// 30
// 20
// 10

// 10 20 30 40 50 

#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int arr[] , int n){
    if(i>=(int)(n/2)) return;
    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    reverse( i+1, arr ,n);
}
void output( int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,arr,n);
    output(arr,n);

    return 0;
}
