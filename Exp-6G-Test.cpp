// Vinay Koli Exp-6
// 24070123133
//B2
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=2;i++){
        cout<<"Outer:"<<i<<"\n";
       for(int j=1;j<=3;j++){
        cout<<"Inner:"<<i<<"\n";
       }
    }
}
/*
Output:
Outer:1
Inner:1
Inner:1
Inner:1
Outer:2
Inner:2
Inner:2
Inner:2
*/
