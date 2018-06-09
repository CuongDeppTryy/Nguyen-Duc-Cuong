#include "BanDoc.h"
int BanDoc::getType()
{
	return nType;
}
int BanDoc::getNgayDangKi()
{
	return NgayDangKi.getNgay();
}
int BanDoc::getThangDangKi()
{
	return NgayDangKi.getThang();
}
int BanDoc::getNamDangKi()
{
	return NgayDangKi.getNam();
}
void BanDoc::setKhoa(string sKhoa)
{
	this->sKhoa = sKhoa;
}
void BanDoc::setHoTen(string sHoTen)
{
	this->sHoTen = sHoTen;
}
void BanDoc::setMaBanDoc(string sMaBanDoc)
{
	this->sMaBanDoc = sMaBanDoc;
}
string BanDoc::getKhoa()
{
	return sKhoa;
}
string BanDoc::getHoTen()
{
	return sHoTen;
}
string BanDoc::getMaBanDoc()
{
	return sMaBanDoc;
}
void BanDoc::outputBanDoc()
{
	cout << "Ma ban doc: " << sMaBanDoc << endl;
	cout << "Ngay dang ki: "; NgayDangKi.output();
	cout << "Ho ten: " << sHoTen << endl;
	cout << "Khoa: " << sKhoa << endl;
}