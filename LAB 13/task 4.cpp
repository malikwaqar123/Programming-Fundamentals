#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int* ptr = &num;

    *ptr = 50;

    cout << "Modified value: " << num;

    return 0;
}