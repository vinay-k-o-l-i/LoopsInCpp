#include<iostream>
using namespace std;
int main(){
    int i ,j;
    char ch='A';
    int n=4;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
}
}
/*
A
BC
DEF
GHIJ*/
