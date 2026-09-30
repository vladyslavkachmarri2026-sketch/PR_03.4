// Lab_03_4.cpp
// Качмар Владислав
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 12
#include <iostream>
using namespace std;

int main() {

    double x, y, R;
    
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "R = ";
    cin >> R;
   if (((x + R) * (x + R) + (y - R) * (y - R) >= R * R && x >= -R && x <= 0 && y >= 0 && y <= R) ||
        ((x - R) * (x - R) + (y + R) * (y + R) >= R * R && x >= 0 && x <= R && y >= -R && y <= 0)) 
        cout << "yes" << endl;
    
    else 
      cout << "no" << endl;
   

    return 0;
}