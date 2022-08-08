#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool prevsorted=sorted(arr+1,n-1);
    return(arr[1]>arr[0] && prevsorted);
}
    int main(){
        int arr[]={3,5,7,8,9};
        cout<<sorted(arr,5);
        return 0;

    }
