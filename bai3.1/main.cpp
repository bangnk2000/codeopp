#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class DATE{
private:
    int D;
    int M;
    int Y;
public:
    void Nhap();
    void Xuat();
};

class NHANSU{
private:
    char maNhanSu[10];
    char hoTen[30];
    DATE NS;
public:
    void nhap();
    void xuat();
};

void DATE::Nhap()
{
    cout<< "Nhap ngay: ";   cin>>D;
    cout<< "Nhap thang: ";  cin>>M;
    cout<< "Nhap nam: ";    cin>>Y;
}

void NHANSU::nhap()
{
    cout<< "Ma nhan su: ";  fflush(stdin);  gets(maNhanSu);
    cout<< "Ho va ten: ";   fflush(stdin);  gets(hoTen);
    cout<< "Nhap ngay sinh: "<<endl; NS.Nhap();
}

void DATE::Xuat()
{
    cout<<D<<"/"<<M<<"/"<<Y;
}

void NHANSU::xuat()
{
    cout<<setw(10)<<maNhanSu<<setw(30)<<hoTen<<setw(10);
    NS.Xuat();
    cout<<endl;
}

int main()
{
    NHANSU x;
    x.nhap();
    cout<<setw(10)<<"MaNhanSu"<<setw(30)<<"Ho va ten"<<setw(10)<<"Ngay sinh"<<endl;
    x   .xuat();
    return 0;
}
