// COMSC-210 | Lab 16 | Kyawt Thinzar Min
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
// default constructor
    Color()                      {red = 0; blue = 0; green = 0;}
// partial constructor
    Color(int r)                 {red = 1; blue = 0; green = 0;}
// full parameter constructor
    Color(int r, int b, int g)   {red = r; blue = b; green = g;}
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
    Red.print();
  Color Blue(0, 123, 0);
    Blue.print();
  Color Green(0, 0, 123);
    Green.print();
  //Partial Constructor
  Color ParCon(111);
    ParCon.print();
  return 0;
}
