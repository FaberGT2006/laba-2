#include <iostream>
#include <string> 
#include <fstream>
#include "Database.h"
using namespace std;

int main()
{
    Database ("database.txt");
    Product myproduct;
    int b = 0;
    Product* d = nullptr;
    int a;
    do {
        cout << "1.Add a    product" << endl;
        cout << "2.Delete a    product" << endl;
        cout << "3.Displaying a list of    product" << endl;
        cout << "4   product search" << endl;
        cout << "5.Change the information about the    product" << endl;
        cout << "6.Exit" << endl;
        cout << "Your choice:" << endl;
        cin >> a;
        switch (a) {
        case 1:
            Product addProduct();
            break;
        case 2:
            Product deleteProduct();
            break;
        case 3:
           Product display();
            break;
        case 4:
            Product search();
            break;
        case 5:
            Product editProduct();
            break;
        case 6:
            break;
        default:
            while (a > 6 || !(cin >> a)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Wrong choice.Try again" << endl;
                cout << "Your choice:";
                cin >> a;
            }
            break;
        }
    } while (a != 6);
    delete[] d;
    return 0;
}
