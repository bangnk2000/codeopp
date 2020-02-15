#include <bits/stdc++.h>

using namespace std;

class QUANLY
{
private:
    char maQL[10];
    char hoTen[20];
public:
    void nhap();
    void xuat();
};

class MAY
{
private:
    char maMay[10];
    char kieuMay[15];
    char tinhTrang[15];
public:
    void nhap();
    void xuat();
};

class PHONGMAY
{
private:
    char maPhong[10];
    char tenPhong[20];
    int dienTich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
};

void QUANLY::nhap()
{
    cout<<"Ma quan ly: "; fflush(stdin);    gets(maQL);
    cout<<"Ho ten quan ly: "; fflush(stdin);    gets(hoTen);
}

void QUANLY::xuat()
{
    cout<<"\tMa quan ly: "<<maQL<<endl;
    cout<<"\tHo va ten quan ly: "<<hoTen<<endl;
}

void MAY::nhap()
{
    cout<<"Ma may: "; fflush(stdin);    gets(maMay);
    cout<<"Kieu may: "; fflush(stdin);  gets(kieuMay);
    cout<<"Tinh trang: "; fflush(stdin);    gets(tinhTrang);
}

void MAY::xuat()
{
    cout<<setw(10)<<maMay<<setw(15)<<kieuMay<<setw(15)<<tinhTrang<<endl;
}

void PHONGMAY::nhap()
{
    cout<<"Ma phong: "; fflush(stdin);  gets(maPhong);
    cout<<"Ten phong: "; fflush(stdin); gets(tenPhong);
    cout<<"Dien tich phong: "; cin>>dienTich;
    x.nhap();
    cout<<"So luong may cua phong: "; cin>>n;
    y = new MAY[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Thong tin may thu "<<i+1<<":"<<endl;
        y[i].nhap();
    }
}

void PHONGMAY::xuat()
{
    cout<<"Ma phong: "<<maPhong<<endl;
    cout<<"Ten phong: "<<tenPhong<<endl;
    cout<<"Dien tich phong: "<<dienTich<<endl;
    x.xuat();
    cout<<setw(3)<<"STT"<<setw(10)<<"Ma may"<<setw(15)<<"Kieu may"<<setw(15)<<"Tinh trang"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<setw(3)<<i+1;
        y[i].xuat();
    }
}

int main()
{
    PHONGMAY a;
    a.nhap();
    a.xuat();
    return 0;
}
