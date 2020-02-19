#include <bits/stdc++.h>

using namespace std;

class PTB2
{
private:
    float a,b,c;
public:
    void nhap();
    void xuat();
    void giai();
    PTB2();
    PTB2(float x, float y, float z);
};

void PTB2::nhap()
{
    cout<<" a= ";   cin>>a;
    cout<<" b= ";   cin>>b;
    cout<<" c= ";   cin>>c;
}

void PTB2::xuat() // đã xem hướng dẫn để  có hàm xuất
{
    cout<<"Phuong trinh: "<<a<<"X"<<(char)253<<" + "<<b<<"X + "<< c <<" = 0"<<endl;
}
void PTB2::giai()
{
    float delta;
    delta = b*b - 4*a*c;
    if(delta>0)
    {
        float x1 = -(b+sqrt(delta))/(2*a);
        float x2 = -(b-sqrt(delta))/(2*a);
        cout<<"Phuong trinh co 2 nghiem phan biet:"<<endl;
        cout<<"\tx1 = "<<x1;
        cout<<"\tx2 = "<<x2;
    }
    else if(delta<0)
        cout<<"Phuong trinh vo nghiem";
    else
    {
        float x = -b/(2*a);
        cout<<" Phuong trinh co 1 nghiem duy nhat: x= "<<x<<endl;
    }
}

PTB2::PTB2()
{
    a=0;
    b=0;
    c=0;
}

PTB2::PTB2(float x, float y, float z)
{
 x = a;
 y = b;
 z = c;
}

int main()
{
    PTB2 P(1, 3, -2);
    P.xuat();
    P.giai();

   PTB2 Q;
   Q.nhap();
   Q.xuat();
   Q.giai();
    return 0;
}
