#include<iostream>
using namespace std;

int main() {
    float tempC ;
    cout<<"Enter temperature in Celsius ";
    cin>>tempC;

    float tempF = ((9*tempC)/5)+32;

    cout<<"Temperature in Fahrenheit is "<<tempF<<endl;

    return 0;
}