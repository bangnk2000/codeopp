#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char maSV[10];
    char hoTen[20];
    float diemToan;
    float diemLy;
    float diemHoa;
    friend float TONGDIEM();
public:
    void nhap();
    void xuat();
    friend void sap(SINHVIEN *a, int n);
};

void SINHVIEN::nhap()
{
    cout<<"Ma sinh vien: "; fflush(stdin);  gets(maSV);
    cout<<"Ho ten sinh vien: "; fflush(stdin);  gets(hoTen);
    cout<<"Diem toan: ";    cin>>diemToan;
    cout<<"Diem ly: ";  cin>>diemLy;
    cout<<"Diem hoa: "; cin>>diemHoa;
}

void SINHVIEN::xuat()
{
    cout<<setw(10)<<maSV<<setw(20)<<hoTen<<setw(10)<<diemToan<<setw(10)<<diemLy<<setw(10)<<diemHoa<<setw(10)<<diemHoa+diemLy+diemToan<<endl;
}

void sap(SINHVIEN *a, int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(a[i].diemToan+a[i].diemLy+a[i].diemHoa>a[j].diemToan+a[j].diemLy+a[j].diemHoa)
            {
                SINHVIEN temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
}


int main()
{
    SINHVIEN *a;
    int n;
    cout<<"n= ";    cin>>n;
    a = new SINHVIEN[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Nhap sinh vien thu "<<i+1<<":"<<endl;
        a[i].nhap();
    }
    cout<<setw(3)<<"STT"<<setw(10)<<"Ma sinh vien"<<setw(20)<<"Ho va ten"<<setw(10)<<"Diem Toan"<<setw(10)<<"Diem Ly"<<setw(10)<<"Diem Hoa"<<setw(10)<<"Tong diem"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<setw(3)<<i+1;
        a[i].xuat();
    }
    return 0;
}
