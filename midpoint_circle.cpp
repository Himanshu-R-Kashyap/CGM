#include<iostream>
using namespace std;

void midCircle(int r, int cx, int cy)
{
    int x, y;
    x = 0;
    y = r;
    int pk;
    pk = 1 - r;
    while(x<y)
    {
        if(pk<0)
        {
            x = x + 1;
            pk = pk + 2*x + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            pk = pk + 2*x + 1 - 2*y;
        }

    }
}
int main()
{
    int radius, cx, cy;
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Enter x co-ordinate of center: ";
    cin>>cx;
    cout<<"Enter y co-ordinate of center: ";
    cin>>cy;
    midCircle(radius, cx, cy);
    return 0;
}
