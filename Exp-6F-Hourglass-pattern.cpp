// Vinay Koli Exp-6
// 24070123133
//B2
#include <iostream>
using namespace std;
int main() {
    int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; 
        }
        for (int k = 1; k <= i; k++) {
            cout << "* "; 
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; 
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
/*Output:
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
 * * * * *
*/
