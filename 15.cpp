#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n-1];
    int temp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
        {temp=1;
        cout<<i;
        }
        if (temp==1)
        break;
        else 
        continue; 
    }
    
    return 0;
}