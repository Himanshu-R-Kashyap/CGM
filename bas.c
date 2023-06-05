#include<iostream>
using namespace std;

void bresenhum(int x0, int y0, int x1, int y1)
{
	float dx, dy, m;
	dx=x1-x0;
	dy=y1-y0;
	m=dy/dx;
	if(m<1)
	{
		cout<<"Points to be drawn are: "<<endl;
		int x= x0;
		int y= y0;
		int pk;
		cout<<"("<<x<<" , "<<y<<")"<<endl;
		pk=(2*dy)-dx;
		while (x<x1)
		{
			if(pk<0)
			{
				x=x+1;
				cout<<"("<<x<<" , "<<y<<")"<<endl;
				pk=pk+(2*dy);
			}
			else
			{
				x=x+1;
				y=y+1;
				cout<<"("<<x<<" , "<<y<<")"<<endl;
				pk=pk+(2*dy)-(2*dx);
			}
		}
	}
	else
	{
		cout<<"This algorithm not work if m>1 !"<<endl;
	}
}
int main()
{
	int x0, y0, x1, y1;
	cout<<"1X";
	cin>>x0;
	cout<<"1Y";
	cin>>y0;
	cout<<"2X";
	cin>>x1;
	cout<<"2Y";
	cin>>y1;
	bresenhum(x0,y0,x1,y1);
	return 0;
}
