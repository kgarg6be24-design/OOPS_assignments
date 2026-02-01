#include<iostream>
#include <iomanip>   // for setw

using namespace std;

int main() {

    cout << "Using endl:" << endl;
    cout << "Line 1" << endl << "Line 2" << endl << endl;

    cout << "Using setw() for formatted output:" << endl;
    cout << setw(10) << "Name"
         << setw(10) << "Roll No."<<endl;

    cout << setw(10) << "Krish "
         << setw(10) << " 1024150236"<<endl;



    return 0;
}