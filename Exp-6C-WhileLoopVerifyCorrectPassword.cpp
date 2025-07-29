#include<iostream>
#include<string>
using namespace std;
int main(){
    string correct_password,enter_password;
    correct_password="vin@123";
    while(true){
        cout<<"Enter the Password: ";
        cin>>enter_password;
    if(enter_password==correct_password){
        cout<<"welcome to the sit.pune";
    }
    else if(enter_password!=correct_password){
        cout<<"Wrong password enter it again";
    }
    else{
        cout<<"NO more entry try agin in 10m";
        }
        break;
    }
    return 0;
}
/*
Output:
Vinay Koli: Enter the Password: 35245
Wrong password enter it againp
Vinay Koli: Enter the Password: vin@123
welcome to the sit.pune
*/
