#include<iostream>
using namespace std;


int count(int n){
    if (n==0){
    return 0;}
    cout<<n<<endl;
    return count(n-1);

}

int main(){
   int n;
cin>>n;
int ans=count(n) ;
cout<<ans;
}