
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]==m)
        sum=sum+1;
    }
    cout<<sum;
    return 0;
}