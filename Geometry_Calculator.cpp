// COMSC-210 | Lab 12 | Mehraj Hasan Nafi
// IDE used: VSC and XCode

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

int main () {
    int choice;
    double area;
    
    cout << "This program calculates the area of geometric shapes." << endl;
    
    do {
        cout << "What would you like to calculate the area of?" << endl;
        cout << "1: Calculate the area of a circle." << endl;
        cout << "2: Calculate the area of a rectangle." << endl;
        cout << "3: Calculate the area of a triangle." << endl;
        cout << "4: Quit." << endl;
        
        cout << "Enter your choice (1 ~ 4): ";
        cin >> choice;
        cout << endl;
        
        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle here: ";
                cin >> radius;
                
                if (radius < 0) {
                    cout << "Invalid input. Radius can't be negative." << endl;
                } else {
                    area = PI * radius * radius;
                    cout << fixed << setprecision(4);
                    cout << "The area of the circle is: " << area << endl;
                }
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle here: ";
                cin >> length;
                cout << "Enter the width of the rectangle here: ";
                cin >> width;

                if (length < 0 || width < 0) {
                cout << "Invalid input. Length and width can't be negative." << endl;
                } else {
                  area = length * width;
                  cout << fixed << setprecision(0);
                  cout << "The area of the rectangle is: " << area << endl;
                }
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base of the triangle here: ";
                cin >> base;
                cout << "Enter the height of the triangle here: ";
                cin >> height;
                
                if (base <= 0 || height <= 0) {
                    cout << "User error. Please ensure both base and height are non-negative." << endl;
                } else {
                    area = base * height * 0.5;
                    cout << fixed << setprecision(0);
                    cout << "The area of the triangle is: " << area << endl;
                }
                break;
            }
            case 4:
                cout << "Quitting the program." << endl;
                break;
            default:
                cout << "Invalid input. Please run the program again and select one of the four options." << endl;
        }
    } while (choice != 4);
    
    return 0;
    
            }

