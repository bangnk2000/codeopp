#include <bits/stdc++.h>

using namespace std;

class NSX{
private:
    char maNSX[10];
    char tenNSX[20];
    char dcNSX[20];
public:
    void nhap();
    void xuat();
};

class HANG{
    char maHang[10];
    char tenHang[15];
    NSX x;
public:
    void nhap();
    void xuat();
};

void NSX::nhap()
{
    cout<<"Ma nha san xuat: "; fflush(stdin);   gets(maNSX);
    cout<<"Ten nha san xuat: "; fflush(stdin);  gets(tenNSX);
    cout<<"Dia chi nha san xuat: "; fflush(stdin);  gets(dcNSX);
}

void NSX::xuat()
{
    cout<<setw(10)<<maNSX<<setw(20)<<tenNSX<<setw(20)<<dcNSX<<endl;
}

void HANG::nhap()
{
    cout<<"Ma hang: ";  fflush(stdin);  gets(maHang);
    cout<<"Ten hang: "; fflush(stdin);  gets(tenHang);
    x.nhap();
}

void HANG::xuat()
{
    cout<<setw(10)<<maHang<<setw(15)<<tenHang;
    x.xuat();
}

int main()
{
    HANG a;
    a.nhap();
    cout<<setw(10)<<"Ma hang"<<setw(15)<<"Ten hang";
    cout<<setw(10)<<"Ma nha san xuat"<<setw(20)<<"Ten nha san xuat"<<setw(20)<<"Dia chi nha san xuat"<<endl;
    a.xuat();
    return 0;
}
