//COMSC-210|Lab 14|Ethan Aylard
//IDE Used: Visual Studio Code
// This program demonstrates the use of classes, setter, and getter member function so that it can keep track of Color Objects

#include <iostream>
using namespace std;

class Color {
private:
//Private member variables
    string name;
    int red;
    int green;
    int blue;
public:
    // getter and setter member functions
    //getter functions:
    string getName() const { return name; }
    int getRed() const { return red; }
    int getGreen() const { return green; }
    int getBlue() const { return blue; }
    //setter functions:
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
    // Create Color objects
    Color colorB, colorCR, colorLG, colorW;

    // Set values for color1
    colorB.setName("Black");
    colorB.setRed(0);
    colorB.setGreen(0);
    colorB.setBlue(0);

    // Set values for color2
    colorCR.setName("Crimson Red");
    colorCR.setRed(220);
    colorCR.setGreen(20);
    colorCR.setBlue(60);

    // Set values for color3
    colorLG.setName("Lime Green");
    colorLG.setRed(50);
    colorLG.setGreen(205);
    colorLG.setBlue(50);

    // Set values for color4
    colorW.setName("White");
    colorW.setRed(250);
    colorW.setGreen(250);
    colorW.setBlue(250);

    //displaying all the reds of each color
    cout << "Red values of each color:\n";
    cout << colorB.getName() << ": " << colorB.getRed() << endl;
    cout << colorCR.getName() << ": " << colorCR.getRed() << endl;
    cout << colorLG.getName() << ": " << colorLG.getRed() << endl;
    cout << colorW.getName() << ": " << colorW.getRed() << endl;
    cout << endl;

    //displaying all the greens of each color
    cout << "Green values of each color:\n";
    cout << colorB.getName() << ": " << colorB.getGreen() << endl;
    cout << colorCR.getName() << ": " << colorCR.getGreen() << endl;
    cout << colorLG.getName() << ": " << colorLG.getGreen() << endl;
    cout << colorW.getName() << ": " << colorW.getGreen() << endl;
    cout << endl;

    //displaying all the blues of each color
    cout << "Blue values of each color:\n";
    cout << colorB.getName() << ": " << colorB.getBlue() << endl;
    cout << colorCR.getName() << ": " << colorCR.getBlue() << endl;
    cout << colorLG.getName() << ": " << colorLG.getBlue() << endl;
    cout << colorW.getName() << ": " << colorW.getBlue() << endl;
    cout << endl;


    // Print the colors
    colorB.print();
    cout << endl;
    colorCR.print();
    cout << endl;
    colorLG.print();
    cout << endl;
    colorW.print();
    cout << endl;

    return 0;
}