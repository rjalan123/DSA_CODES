#include<iostream>
using namespace std;
int stock(int arr[],int n){
    int minsofar=arr[0];
    int maxprofit=0;
    for(int i=0;i<n;i++){
        if(minsofar>arr[i])
        minsofar=arr[i];
        if((arr[i]-minsofar)>maxprofit)
        maxprofit=(arr[i]-minsofar);
    }
    return maxprofit;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<stock(arr,n);
    return 0;
}
