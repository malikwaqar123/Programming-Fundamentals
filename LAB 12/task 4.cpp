#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n1. Burger - 300";
    cout << "\n2. Pizza  - 800";
    cout << "\n3. Fries  - 200";
    cout << "\n4. Drink  - 100";
    cout << "\n5. Exit\n";
}

int itemCost(int choice, int qty) {
    int price = 0;
    if (choice == 1) price = 300;
    else if (choice == 2) price = 800;
    else if (choice == 3) price = 200;
    else if (choice == 4) price = 100;
    return price * qty;
}

float finalBill(float total) {
    return total + (total * 0.10); // 10% tax
}

int main() {
    int choice, qty;
    float total = 0;

    do {
        showMenu();
        cout << "Select item: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter quantity: ";
            cin >> qty;
            total += itemCost(choice, qty);
        }
    } while (choice != 5);

    cout << "\nTotal Bill (with tax): " << finalBill(total);
    return 0;
}