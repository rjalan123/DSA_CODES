#include<iostream>
#include<map>
using namespace std;
int main(){
    run();
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for (auto it: m){
        if (it.second > 1){
            cout<< it.first << "count=" << it.second <<end;
        }
    }
    return 0;
}
