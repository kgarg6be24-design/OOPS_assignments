#include<iostream>
using namespace std;

int main() {
    int num1,num2;
    char op;
    cout<<"Enter num1 and num2 ";
    cin>>num1>>num2;

    cout<<"Enter op(+,-,*,/) = ";
    cin>>op;

    switch(op) {
        case '+' :
        cout<<"Addition = "<<num1+num2<<endl;
        break;

        case '-' :
        cout<<"subtration = "<<num1-num2<<endl;
        break;
        case '*' :
        cout<<" multiplication = "<<num1*num2<<endl;
        break;
        case '/' :
        if(num2!=0) {
            cout<<"Division = "<<num1/num2<<endl;
        }
        else cout<<"Division not possible";
        break;
    }

    return 0;
}