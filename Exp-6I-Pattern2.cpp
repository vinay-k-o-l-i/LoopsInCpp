//Vinay Koli Exp-6
//24070123133
//B2
#include<iostream>
using namespace std;
int main(){
    int i ,j,k;
    int n=5;
    for(i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*
Output:
        * 
      * *
    * * *
  * * * *
* * * * *
*/
