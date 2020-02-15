#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

class oto
{
    char maOto[10];
    int giaMuaMoi;
    int soNamSD;
    float tiLeKhauHao;
public:
    void nhap();
    void xuat();
};

void oto::nhap()
{
    cout<<"Ma oto: ";   fflush(stdin);  gets(maOto);
    cout<<"Gia mua moi: ";  cin>>giaMuaMoi;
    cout<<"So nam su dung: ";   cin>>soNamSD;
    cout<<"Ti le khau hao/nam(%/nam): "; cin>>tiLeKhauHao;
}

void oto::xuat()
{
    int gia=giaMuaMoi;
    cout<<setw(15)<<maOto<<setw(15)<<giaMuaMoi<<setw(15)<<soNamSD;
    cout<<setw(30)<<tiLeKhauHao;
    for(int i=0; i<soNamSD;i++) gia=gia-(gia*tiLeKhauHao/100);
    cout<<setw(30)<<gia<<endl;
}

int main()
{
    int n;  cout<<"n= ";    cin>>n;
    oto *a = new oto[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Thong tin oto thu "<<i+1<<":"<<endl;
        a[i].nhap();
    }
    cout<<setw(15)<<left<<"Ma oto"<<setw(15)<<"Gia mua moi";
    cout<<setw(15)<<"So nam su dung";
    cout<<setw(30)<<"Ti le khau hao/nam(%/nam)";
    cout<<setw(30)<<"Gia tri hien tai"<<endl;
    for(int i=0; i<n; i++)
        a[i].xuat();
    return 0;
}
