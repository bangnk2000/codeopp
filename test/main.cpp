#include <iostream>
#include <graphics.h>
#include <conio.h>
#define xc 300
#define yc 200
using namespace std;
void put2pixel(int x, int y, int mau)
{
    putpixel(-y + xc,-x + yc,mau);
    putpixel(-x + xc,-y + yc,mau);
}
void veDuongTron(int x, int y, int r)
{
    x = 0;
    y = r;
    int p = 3 - 2*r;
    while(x<=y)
    {
        put2pixel(x,y, 10);
        if(p<0)
            p += 4*x + 6;
        else
        {
           p += 4*(x-y) + 10;
           y--;
        }
        x++;
    }
}
int main()
{
    initwindow(1000,1000);
    int x,y;
    veDuongTron(x,y,100);
    getch();

}

