#include <iostream>
using namespace std;

int main() {
    int num = 10;
    void* vptr = &num;

    cout << "Value of integer using void pointer: "
         << *(int*)vptr;

    return 0;
}