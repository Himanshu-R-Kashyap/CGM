#include<iostream>
#include<cmath>
using namespace std;

void dda(int x0, int y0, int x1, int y1)
{
	cout<<"pixels to be drawn are"<<endl;
	float x,y,dx,dy,xinc,yinc,steps;
	x=x0;
	y=y0;
	dx=x1-x0;
	dy=y1-y0;
	if(dx>dy)
	{
		steps = abs(dx);
	}
	else
	{
		steps = abs(dy);
	}
	xinc = dx/steps;
	yinc = dy/steps;
	cout<<"("<<round(x)<<","<<round(y)<<")"<<endl;
	for(int i=1; i<=steps; i++)
	{
		x=x+xinc;
		y=y+yinc;
		cout<<"("<<round(x)<<", "<<round(y)<<")"<<endl;
	}
}
	int main()
	{
		int x0, y0, x1, y1;
		cout<<"Enter X coordinate for initial point :";
		cin>>x0;
		cout<<"Enter Y coordinate for initial point :";
		cin>>y0;
		cout<<"Enter X coordinate for final point :";
		cin>>x1;
		cout<<"Enter X coordinate for final point :";
		cin>>y1;
		dda(x0,y0,x1,y1);
		return 0;
	}
			
