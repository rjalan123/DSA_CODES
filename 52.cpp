#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[j+1])
       
        cout<<s[j];
        j++;
       
    }
    return 0;
}