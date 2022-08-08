#include<iostream>
using namespace std;
#include<climits>
int main(){
    int n;
    cin>>n;
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       
        max_no=max(arr[i],max_no);
        min_no=min(arr[i],min_no);

    }
    int a=(max_no)-(min_no);
    float b=(max_no-min_no)/(max_no+min_no);
    cout<<a<<endl;
    
    cout<<b<<endl;
  
    return 0;
}