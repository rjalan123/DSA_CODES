#include<iostream>
using namespace std;
int main(){
    int n,m;
    int arr[n][m];
    int x;
    cin>>n>>m;
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     bool flag=false;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(arr[i][j]==x)
           flag=true;
        }
    }
    if(flag){
        cout<<"element found";
    }
    return 0;
}