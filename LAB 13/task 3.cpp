#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int* ptr = &num;

    cout << "Value of variable using pointer: " << *ptr;

    return 0;
}