#include <iostream>
#include "class.h"


int Rectangle :: getLength()
{
	return length;
}
int Rectangle :: getWidth()
{
	return width;
}
void Rectangle :: setLength(int l)
{
	length= l;
}
void Rectangle :: setWidth(int w)
{
	width=w;
}
int Rectangle :: getArea()//for calculating area of rectangle 
{
	int area;
	area=length*width;
	return area;
}
void Rectangle :: rotateRectangle()//for swapping values of length and width
{
	float temp;
	temp=length;
	length=width;
	width=temp;
}

void Rectangle :: draw()//for drawing rectangle of length and width with values entered by user
{
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}









