#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

class daySo
{
    float *a;
    int n;
public:
    void nhap();
    void xuat();
    float max();
    float min();
};

void daySo::nhap()
{
    cout<< "n= ";   cin>>n;
    a = new float[n];
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}

void daySo::xuat()
{
    for(int i=0; i<n; i++)
        cout<<" "<<a[i];
    cout<<endl;
}

float daySo::max()
{
    float temp=a[0];
    for(int i=0; i<n; i++)
        if(a[i]>temp)
            temp=a[i];
    return temp;
}

float daySo::min()
{
    float temp=a[0];
    for(int i=0; i<n; i++)
        if(a[i]<temp)
            temp=a[i];
    return temp;
}

int main()
{
    daySo x;
    x.nhap();
    x.xuat();
    cout<<"max mang: "<<x.max();
    cout<<"min mang: "<<x.min();
    return 0;
}
