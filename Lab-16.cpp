// COMSC-210 | Lab 14 | Kyawt Thinzar Min
// IDE used: Visual Studio Code

#include <iostream>
#include <iomanip>
using namespace std;

class Color{
//private data members
  private:
    int red;
    int green;
    int blue;
  public:
//public member functions
//each of these is a pair for each color red, blue, green
    void setRed (int r) {red = r;}
    int getRed()       {return red;}

    void setBlue (int b) {blue = b;}
    int getBlue()       {return blue;}

    void setGreen (int g) {green = g;}
    int getGreen()        {return green;}

    void print(){ //print function
        cout << setw(15) << "Red: " << red << endl;
        cout << setw(15) << "Blue: " << blue << endl;
        cout << setw(15) << "Green: " << green << endl;
        cout <<endl;
    }
};

int main(){
  cout << fixed << setprecision(2);
    // creating objects
    // setting values and printing them for each color
  Color Red;
  Red.setRed(123);
  Red.setBlue(0);
  Red.setGreen(0);
  Red.print();
  Color Blue;
  Blue.setRed(0);
  Blue.setBlue(123);
  Blue.setGreen(0);
  Blue.print();
  Color Green;
  Green.setRed(0);
  Green.setBlue(0);
  Green.setGreen(123);
  Green.print();

  return 0;
}
