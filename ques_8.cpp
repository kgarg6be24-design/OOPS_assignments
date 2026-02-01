#include<iostream>
using namespace std;

int main() {

    int days;
    float fine = 0;

    cout<<"Enter number of days late ";
    cin>>days;

    if(days<=5) {
        fine = days*0.5;
        cout<<"Fine (Rs.) = "<<fine<<endl;  
    }

    else if(days<=10) {
        fine = (5*0.5)+(days-5)*1;
        cout<<"Fine (Rs.) = "<<fine<<endl;
    }

    else if(days<=30) {
        fine = (5*0.5)+(5*1)+(days-10)*5;
        cout<<"Fine (Rs.) = "<<fine<<endl;
    }

    else cout<<"Membership Cancelled"<<endl;

    cout<<"Fine (Rs.) = "<<fine;

    return 0;
}