#include<iostream>
using namespace std;

class Demo {
    private:
    void privatefunc() {
        cout<<"Private finction called\n";
    }

    public:
    void publicfunc() {
        privatefunc();
    }
};

int main() {
    Demo d;
    d.publicfunc();
    return 0;
}