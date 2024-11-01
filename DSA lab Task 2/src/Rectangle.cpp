#include "Rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::~Rectangle()
{
}
int Rectangle::calculateArea(int a, int b){
return a*b;
}
int Rectangle::calculatePerimeter(int a, int b){
return 2*(a+b);
}
