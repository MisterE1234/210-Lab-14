//COMSC-210|Lab 14|Ethan Aylard
//IDE Used: Visual Studio Code
// This program demonstrates the use of classes, setter, and getter member function so that it can keep track of Color Objects

#include <iostream>
#include <iomanip>
using namespace std;

class Color {
private:
    string name;
    int red;
    int green;
    int blue;
public:
    // getter and setter member functions
    string getName() const { return name; }
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }
    void setName(string n) { name = n; }
    void setRed(int r) { red = r; }
    void setGreen(int g) { green = g; }
    void setBlue(int b) { blue = b }

    //Print function
    void print() const {
        cout << name << ":\n ";
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

