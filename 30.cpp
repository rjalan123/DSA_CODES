#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

 int count=0;
 int j=1;
 for(int i=0;i<n-1;i++){
     
     if(arr[i]+arr[j+i]==k)
     count=count+1;
     j++;
    
 }
 cout<<count;
}