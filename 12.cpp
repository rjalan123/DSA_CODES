#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restsorted=sorted(arr+1,n-1);
    return(arr[1]>arr[0] && restsorted);
}
int main(){
    int arr[]={1,2,3,7,8};
    cout<<sorted(arr,5);
    return 0;
}