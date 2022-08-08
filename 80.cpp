#include<iostream>
using namespace std;

int vertArr[20][20];


void Displaymatrix(int v){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<vertArr[i][j]<<"";
        }
        cout<<endl;
    }
}
void addedge(int u,int v){
    vertArr[u][v]=1;
     vertArr[v][u]=1;
}
int main(){
    int v=6;
    addedge(0,4);
    addedge(0,3);
    addedge(1,2);
    addedge(1,4);
     addedge(1,5);
     addedge(2,3);
       addedge(2,5);
         addedge(5,3);
           addedge(5,4);
    Displaymatrix(v);
}