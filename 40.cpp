#include<iostream>
using namespace std;
int palindrome(string s){
    int high =s.length()-1;
    for(int i=0;i<s.length();i++){
       if(s[i]!=s[high]){
        return false;}
        high--;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    cout<<s<<endl;
    cout<<palindrome(s);
}