
#include <iostream>
using namespace std;

union Data {
    int a;
    float b;
    char c;
};

int main() {
    union Data d;

    cout << "Size of int = " << sizeof(d.a) << " bytes" << endl;
    cout << "Size of float = " << sizeof(d.b) << " bytes" << endl;
    cout << "Size of char = " << sizeof(d.c) << " byte" << endl;
    cout << "Size of union = " << sizeof(d) << " bytes";

    return 0;
}
