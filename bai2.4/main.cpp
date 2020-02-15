#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class doanhNghiep
{
    char tenDN[30];
    char diaChiDN[30];
    int soNhanVien;
    int doanhThu;
public:
    void nhap();
    void xuat();
};

void doanhNghiep::nhap()
{
    cout<<"Ten doanh nghiep: "; fflush(stdin);  gets(tenDN);
    cout<<"Dia chi doanh nghiep: "; fflush(stdin); gets(diaChiDN);
    cout<<"So nhan vien: "; cin>>soNhanVien;
    cout<<"Doanh thu: ";    cin>>doanhThu;
}

void doanhNghiep::xuat()
{
    cout<<setw(30)<<tenDN<<setw(30)<<diaChiDN<<setw(20)<<soNhanVien;
    cout<<setw(20)<<doanhThu;
    cout<<endl;
}

int main()
{
    int n; cout<<"n= "; cin>>n;
    doanhNghiep *x = new doanhNghiep[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Doanh nghiep thu "<<i+1<<":"<<endl;
            x[i].nhap();
    }
    cout<<setw(30)<<left<<"Ten doanh nghiep";
    cout<<setw(30)<<left<<"Dia chi doanh nghiep";
    cout<<setw(20)<<"So nhan vien";
    cout<<setw(20)<<"Doanh thu"<<endl;
    for(int i=0; i<n; i++)
        x[i].xuat();
    return 0;
}
