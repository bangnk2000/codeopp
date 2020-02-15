#include <bits/stdc++.h>

using namespace std;

class HANG;
class DATE
{
    int D, M, Y;
    friend void in(HANG *a, int n, int nam);
    friend class HANG;
};
class HANG
{
    char maHang[20];
    char tenHang[30];
    DATE x;
public:
    void nhap();
    void xuat();
    friend void in(HANG *a, int n, int nam);
};
void HANG::nhap()
{
    cout<<"Ma hang:  ";      fflush(stdin);      gets(maHang);
    cout<<"Ten hang: ";      fflush(stdin);      gets(tenHang);
    cout<<"Nhap Ngay san xuat: "<<endl;
    cout<<"Ngay: ";          cin>>x.D;
    cout<<"Thang: ";         cin>>x.M;
    cout<<"Nam: ";           cin>>x.Y;
}
void HANG::xuat()
{
    cout<<setw(20)<<maHang<<setw(30)<<tenHang<<setw(20)<<x.D<<"/"<<x.M<<"/"<<x.Y<<endl;
}
void in(HANG *a, int n, int nam)
{
    cout<<setw(20)<<"Ma hang"<<setw(30)<<"Ten hang"<<setw(20)<<"Ngay san xuat"<<endl;
    for(int i=0; i<n; i++)
        if(a[i].x.Y==nam) a[i].xuat();
}
int main()
{
    HANG *a; int n;
    cout<<"Nhap so mat hang: "; cin>>n;
    a=new HANG[n];
    for(int i=0; i<n; i++)
    a[i].nhap();
    cout<<"\tMat hang nhap nam: 2017"<<endl;
    in(a, n, 2017);
    return 0;
}
