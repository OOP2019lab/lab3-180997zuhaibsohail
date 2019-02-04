// QUESTION NO.2.cpp : 
//

#include "class.h"//including header file

int main()
{
	Rectangle rectangle;//creeating an object
	int length;//initializing variable length
	cout<<"Enter length of the rectangle : "<<endl;//asking user to enter length of rectangle
	cin>>length;//taking input data from user
	int width;//initializing variable width
	cout<<"Enter width of the rectangle : "<<endl;//asking user to enter width of rectangle
	cin>>width;//taking input data from user
	//calling functions
	rectangle.setLength(length);
	rectangle.setWidth(width);
	rectangle.getLength();
	rectangle.getWidth();
	cout<<"Area of rectangle is : "<<endl;//printing area of rectangle
	cout<<rectangle.getArea()<<endl;//printing area of rectangle
	rectangle.draw();
	system("pause");
	return 0;
}
