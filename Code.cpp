#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
class HocSinh {
private:
	int MSSV;
	char Ten,Lop,Khoa;
public:
	HocSinh(){}
	void nhap();
	void xuat();
	HocSinh(const HocSinh &hs)
	{

	}
};
void HocSinh::nhap()
{
	cout << "\nNhap ma so sinh vien: ";
	//cin >> tuSo;
	cin >> MSSV;
	fflush(stdin);
	cout << "\nNhap ten: ";
	gets(this->Ten);
	fflush(stdin);
	cout << "\nNhap lop: ";
	gets(this->Lop);
	fflush(stdin);
	cout << "\nNhap khoa: ";
	gets(this->Khoa);
}
void HocSinh::xuat()
{
	cout << "MSSV:" << this->MSSV << endl;
	cout << "Ten:" << this->Ten << endl;
	cout << "Lop:" << this->Lop << endl;
	cout << "khoa:" << this->Khoa << endl;
}
void sapXepTen(int n, HocSinh hs)
{
}
////cách 2: tr? v? object hi?n t?i
//phanSo phanSo::rutGon()
//{
//	int a, b;
//	a = abs(this->tuSo);
//	b = abs(this->mauSo);
//	while (a != b)
//	{
//		if (a > b)
//			a -= b;
//		else
//			b -= a;
//	}
//	this->tuSo /= a;
//	this->mauSo /= a;
//	//Gía tr? c?a tuSo và mauSo dã thay d?i
//	return *this;
//}
int main()
{
	int n;
	cout << "\nBan muon nhap bao nhieu hoc sinh: ";cin >> n;
	HocSinh hs[n];
	for(int i=0;i<n;i++)
	{
		hs[i].nhap();
		cout << endl;
	}
	for(int i=0;i<n;i++)
	{
		cout << "Thong tin hoc sinh thu " <<i+1<<" la :" << endl;
		hs[i].xuat();
		cout << endl;
	}

	system("pause");
	return 0;
}
