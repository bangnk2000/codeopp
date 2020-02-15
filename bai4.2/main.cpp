#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char maNSX[10];
    char tenNSX[20];
    char dcnsx[20];
    friend class HANG;
};

class HANG
{
    char maHang[10];
    char tenHang[15];
    float donGia;
    float trongLuong;
    NSX x;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"Ma hang: ";  fflush(stdin);  gets(maHang);
    cout<<"Ten hang: "; fflush(stdin);  gets(tenHang);
    cout<<"Don gia: ";  cin>>donGia;
    cout<<"Truong luong(kg): "; cin>>trongLuong;
    cout<<"Ma nha san xuat: ";  fflush(stdin);  gets(x.maNSX);
    cout<<"Ten nha san xuat: "; fflush(stdin);  gets(x.tenNSX);
    cout<<"Dia chi nha san xuat: "; fflush(stdin);  gets(x.dcnsx);
}

void HANG::xuat()
{
    cout<<setw(10)<<maHang<<setw(15)<<tenHang<<setw(10)<<donGia<<setw(10)<<trongLuong;
    cout<<setw(10)<<x.maNSX<<setw(20)<<x.tenNSX<<setw(20)<<x.dcnsx<<endl;
}

int main()
{
    HANG a;
    a.nhap();
    cout<<setw(10)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(10)<<"Don gia"<<setw(10)<<"Trong luong";
    cout<<setw(10)<<"Ma NSX"<<setw(20)<<"Ten NSX"<<setw(20)<<"Dia chi NSX"<<endl;
    a.xuat();
    return 0;
}
