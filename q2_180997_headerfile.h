#include <iostream>
using namespace std;

class Rectangle//creating a class with name 'Rectangle'
{
    private://initializing private variables
		int width;
		int length;
    public://initializing public variables
		int getWidth();
		int getLength();
		void setLength(int l);
		void setWidth(int w);
		int getArea();
		void rotateRectangle();
		void draw();
};