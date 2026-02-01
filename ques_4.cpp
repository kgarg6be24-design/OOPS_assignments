#include<iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    void data() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    void area() {
        cout << "Area of Rectangle = " << width * height << endl;
    }
};

int main() {
    Rectangle r;
    r.data();
    r.area();
    return 0;
}