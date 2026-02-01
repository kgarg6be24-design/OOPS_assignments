#include<iostream>
using namespace std;

int main() {
    int num1,num2;

    cout<<"Enter num1 and num2 ";
    cin>>num1>>num2;

    cout<<"sum is "<<num1+num2<<endl;
    cout<<"sub is "<<num1-num2<<endl;
    cout<<"multiply is "<<num1*num2<<endl;
    
    if(num2!=0) {
    float num3 = num1/num2;
    cout<<"division is "<<num3;
    }
    else cout<<"divsion is not possible";
    return 0;
}