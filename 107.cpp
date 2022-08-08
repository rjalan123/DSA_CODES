#include<iostream>
using namespace std;
int main(){
    int a[5]={10,3,30,4,55};
    int max=INT_MIN;
    
    
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }

    }
    cout<<max<<endl;
}