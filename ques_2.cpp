#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float cgpa;

    void calculateStatus() {   // private function
        if(cgpa >= 7)
            cout << "Good Standing\n";
        else
            cout << "Needs Improvement\n";
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails() {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << rollNo;
        cout << "\nCGPA: " << cgpa << endl;
        calculateStatus();   // calling private function
    }
};

int main() {
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}