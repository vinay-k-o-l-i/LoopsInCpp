//Vinay Koli Exp-7
// 24070123133
//B2
#include<iostream>
using namespace std;

int main(){
    int i, j, x = 1;
    int n = 4;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            cout << x;
            x = x + 1;
            if(j < i)  
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Output:
1
2 3
4 5 6
7 8 9 10
*/
