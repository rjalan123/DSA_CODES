
#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch=='{'||ch=='['||ch=='{'){
            st.push(ch);
        }
        while(!st.empty()){
            if(st.top()=='}'||st.top()==')'||st.top()==']')
               st.pop();

        }
      return true;
    }
return false;
}
int main(){
    string s="{([])}";
    if(validParenthesis(s))
    cout<<"balanced";
    else
    cout<<"not balanced";
}