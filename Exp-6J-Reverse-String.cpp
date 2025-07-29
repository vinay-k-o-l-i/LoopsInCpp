#include <iostream>
using namespace std;

int main() {
    int prn, a, s = 0;
    cout << "Enter your PRN: ";
    cin >> prn;

    
    while (prn>0) {
        a=prn % 10;
        prn= prn / 10;
        s=s*10 + a;
    }
    cout << "Reversed PRN: " << s << endl;
    return 0;
}
/*Enter your PRN: 2345
Reversed PRN: 5432*/
