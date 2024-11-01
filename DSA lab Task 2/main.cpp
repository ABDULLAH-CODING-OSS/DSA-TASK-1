#include <iostream>
#include"Rectangle.h"

using namespace std;

int main()
{
    int lenght;
    cout << "Enter Length " << endl;
    cin>>lenght;
     int width;
      cout << "Enter  int width " << endl;
      cin>>width;
      Rectangle obj;
      cout<<"The Area Is : "<<obj.calculateArea(lenght,width)<<endl;
      cout<<"The Perimeter is "<<obj.calculatePerimeter(lenght,width)<<endl;
    return 0;
}
