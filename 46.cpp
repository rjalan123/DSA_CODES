#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0,y=0,c=0;
    for(int i=0;i<s.length();i++){
       if(s[i]=='0')
       x++;
       else
       y++;
       if(x==y)
       c++;
    }
    if(x!=y)
    cout<<-1;
    else
    cout<<c;
}