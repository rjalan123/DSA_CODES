#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        if(i+1==k)
        cout<<arr[i]<<" ";
    }
    return 0;
}