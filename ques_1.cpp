#include <iostream>
using namespace std;

struct Student {
   
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    
    void addDetails() {
        cout << "Enter Name: ";
        cin>>name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin>>degree;

        cout << "Enter Hostel: ";
        cin>>hostel;

        cout << "Enter Current CGPA: ";
        cin>>cgpa;
    }



    void updateCGPA() {
        cout << "Enter Updated CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cin.ignore();
        cout << "Enter New Hostel: ";
        cin>>hostel;
    }

    void displayDetails() {
        cout << "\nStudent Details"<<endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displayDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();

    return 0;
}
