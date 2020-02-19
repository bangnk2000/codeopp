#include <bits/stdc++.h>

using namespace std;

class ARRAY
{
private:
    int *VALUE;
    int n;
public:
    void nhap();
    void xuat();
    ARRAY();
    ARRAY(int k);
    ~ARRAY();
};

void ARRAY::nhap()
{
    if(n==0)
    {
     cout<<"Nhap n= ";
     cin>>n;
    }
    if(VALUE==NULL)
    VALUE = new int[n];
    for(int i=0; i<n; i++)
    {
        cout<<"VALUE["<<i<<"]= ";
        cin>>VALUE[i];
    }
}

void ARRAY::xuat()
{
    for(int i=0; i<n; i++)
    {
        cout<<" "<<VALUE[i];
    }
    cout<<endl;
}

ARRAY::ARRAY()
{
    n=0;
    VALUE=NULL;
}

ARRAY::ARRAY(int k)
{
    n = k;
    VALUE = new int[n];
    for(int i=0; i<n; i++)
        VALUE[i] = 0;
}

ARRAY::~ARRAY()
{
    n = 0;
    delete []VALUE;
}

int main()
{
    ARRAY m(8);
    cout<<endl<<"Mang vua khoi tao : ";
    m.xuat();
    cout<<endl<<"Nhap mang: "<<endl;
    m.nhap();
    cout<<endl<<"Mang vua nhap: ";
    m.xuat();
    return 0;
}
