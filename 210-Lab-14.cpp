//COMSC-210|Lab 14|Ethan Aylard
//IDE Used: Visual Studio Code
// This program demonstrates the use of classes, setter, and getter member function so that it can keep track of Color Objects

#include <iostream>
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
    void setBlue(int b) { blue = b; }

    //Print function
    void print() {
        cout << name << ":\n ";
        cout << "RGB(" << red << ", " << green << ", " << blue << ")" << endl;
    }
};

int main() {
    Color color1, color2, color3, color4;

    // Set values for color1
    color1.setName("Sky Blue");
    color1.setRed(135);
    color1.setGreen(206);
    color1.setBlue(235);

    // Set values for color2
    color2.setName("Crimson Red");
    color2.setRed(220);
    color2.setGreen(20);
    color2.setBlue(60);

    // Set values for color3
    color3.setName("Lime Green");
    color3.setRed(50);
    color3.setGreen(205);
    color3.setBlue(50);

    // Set values for color4
    color4.setName("Deep Purple");
    color4.setRed(75);
    color4.setGreen(0);
    color4.setBlue(130);

    //displaying all the reds of each color
    cout << "Red values of each color:\n";
    cout << color1.getName() << ": " << color1.getRed() << endl;
    cout << color2.getName() << ": " << color2.getRed() << endl;
    cout << color3.getName() << ": " << color3.getRed() << endl;
    cout << color4.getName() << ": " << color4.getRed() << endl;
    cout << endl;

    //displaying all the greens of each color
    cout << "Green values of each color:\n";
    cout << color1.getName() << ": " << color1.getGreen() << endl;
    cout << color2.getName() << ": " << color2.getGreen() << endl;
    cout << color3.getName() << ": " << color3.getGreen() << endl;
    cout << color4.getName() << ": " << color4.getGreen() << endl;
    cout << endl;

    //displaying all the blues of each color
    cout << "Blue values of each color:\n";
    cout << color1.getName() << ": " << color1.getBlue() << endl;
    cout << color2.getName() << ": " << color2.getBlue() << endl;
    cout << color3.getName() << ": " << color3.getBlue() << endl;
    cout << color4.getName() << ": " << color4.getBlue() << endl;
    cout << endl;


    // Print the colors
    color1.print();
    cout << endl;
    color2.print();
    cout << endl;
    color3.print();
    cout << endl;
    color4.print();
    cout << endl;

    return 0;
}