#include<iostream>
using namespace std;
#include<stack>



bool balancedParenthesis(string s){
    stack<char> st;
    bool ans=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='['){
            st.push(s[i]);

        }
        else if(s[i]=='('){
            if(!st.empty() && st.top()=='(')
            st.top();
        
        else{
            ans=false;
            break;
        }}
        else if(s[i]=='{'){
            if(!st.empty() && st.top()=='{')
            st.top();
        
        else{
            ans=false;
            break;
        }}
        else if(s[i]=='['){
            if(!st.empty() && st.top()=='[')
            st.top();
        
        else{
            ans=false;
            break;
        }}
    }
    if(!st.empty()){
    return false;}

    return ans;
}

int main(){
    string s="{([])}";

    if(balancedParenthesis(s)){
        cout<<"valid string";

    }
    else{
        cout<<"not valid";
    }
    return 0;
}