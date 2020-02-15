#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char Masv[15];
    char Hoten[30];
    int Tuoi;
    float Diem;
public:
    void nhap();
    void xuat();
};

void SINHVIEN::nhap()
{
    cout<< "Ma sinh vien: ";  fflush(stdin);  gets(Masv);
    cout<< "Ho ten: ";  fflush(stdin); gets(Hoten);
    cout<< "Tuoi: ";    cin>>Tuoi;
    cout<< "Diem: ";    cin>>Diem;
}
void SINHVIEN::xuat()
{
    cout<<setw(10)<<Masv<<setw(20)<<Hoten<<setw(5)<<Tuoi<<setw(5)<<Diem<<endl;
}

int main()
{
    SINHVIEN *a;int n;
    cout<< "n= ";   cin>>n;
    a = new SINHVIEN[n];
    for(int i=0;i<n;i++)
    {
        cout<< "Sinh vien thu "<<i+1<<": "<<endl;
        a[i].nhap();
    }
     cout<<setw(10)<<"Ma sinh vien"<<setw(20)<<"Ho ten"<<setw(5)<<"Tuoi"<<setw(5)<<"Diem"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
