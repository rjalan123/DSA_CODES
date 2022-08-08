#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int j=1;
    int count =0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[j])
        j++;
        count=count+1;
        cout<<arr[i]<<count;
    }
}