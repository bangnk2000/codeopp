#include <bits/stdc++.h>

using namespace std;

class HANG
{
private:
    char maHang[10];
    char tenHang[15];
    float donGia;
public:
    void nhap();
    void xuat();
};

class PHIEU
{
private:
    char maPhieu[10];
    HANG *x;
    int n;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"\tMa hang:";   fflush(stdin);  gets(maHang);
    cout<<"\tTen hang: "; fflush(stdin);  gets(tenHang);
    cout<<"\tDon gia: "; cin>>donGia;
}

void HANG::xuat()
{
    cout<<setw(10)<<maHang<<setw(15)<<tenHang<<setw(15)<<donGia<<endl;
}

void PHIEU::nhap()
{
    cout<<"Ma phieu: "; fflush(stdin);  gets(maPhieu);
    cout<<"So mat hang: ";  cin>>n;
    x = new HANG[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Mat hang thu "<<i+1<<":"<<endl;
        x[i].nhap();
    }
}

void PHIEU::xuat()
{
    cout<<"Ma phieu: "<<maPhieu<<endl;
    cout<<setw(3)<<"STT"<<setw(10)<<"Ma hang"<<setw(15)<<"Ten hang"<<setw(15)<<"Don gia"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<setw(3)<<i+1;
        x[i].xuat();
    }
}

int main()
{
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}
