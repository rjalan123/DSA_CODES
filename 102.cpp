#include<iostream>
#include<stack>
using namespace std;


int main(){
     string s="abcde";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        st.push(ch);
    }
    string ans="";
    while(!st.empty()){
   char ch=st.top();
   ans.push_back(ch);
    st.pop();}
    cout<<"anwer is"<<ans<<endl;
}


