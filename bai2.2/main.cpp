#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

using namespace std;

class mang
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    void sap();
};

void mang::nhap()
{
    cout<< "n=";
    cin>>n;
    a = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<< "a["<<i<<"]= ";
        cin>>a[i];
    }
}

void mang::xuat()
{
    for(int i=0; i<n; i++)
        cout<<" "<<a[i];
    cout<<endl;
}

void mang::sap()
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}

int main()
{
    mang x;
    x.nhap();
    x.xuat();
    x.sap();
    x.xuat();
    return 0;
}
