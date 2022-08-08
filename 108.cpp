#include<iostream>
using namespace std;
int main(){

int arr[5]={2,2,5,4,4};
int ans;

for(int i=0;i<5;i++){
    for(int j=1;i<5;i++){
        if(arr[i]!=arr[j]){
            ans=arr[i];
        }
    }
}
cout<<ans<<" ";
}