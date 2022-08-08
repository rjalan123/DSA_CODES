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
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[j]){
        count++;
        j++;
        if(count>n/2){
        cout<<arr[i]<<endl;}
        
        
        }
        else
        cout<<-1;
        
    }
    return 0;
}
