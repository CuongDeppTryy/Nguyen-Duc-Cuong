#include "Sach.h"
int Sach::getNgayNhapKho()
{
	return NgayNhapKho.getNgay();
}
int Sach::getThangNhapKho()
{
	return NgayNhapKho.getThang();
}
int Sach::getNamNhapKho()
{
	return NgayNhapKho.getNam();
}
void Sach::setTinhTrang(int nTinhTrang)
{
	this->nTinhTrang = nTinhTrang;
}
void Sach::setSoTrang(int nSoTrang)
{
	this->nSoTrang = nSoTrang;
}
void Sach::setNamPhatHanh(int nNamPhatHanh)
{
	this->nNamPhatHanh = nNamPhatHanh;
}
void Sach::setTriGia(int nTriGia)
{
	this->nTriGia = nTriGia;
}
void Sach::setNXB(string sNXB)
{
	this->sNXB = sNXB;
}
void Sach::setTacGia(string sTacGia)
{
	this->sTacGia = sTacGia;
}
void Sach::setTuaDe(string sTuaDe)
{
	this->sTuaDe = sTuaDe;
}
void Sach::setMaSach(string sMaSach)
{
	this->sMaSach = sMaSach;
}
int Sach::getTinhTrang()
{
	return nTinhTrang;
}
int Sach::getSoTrang()
{
	return nSoTrang;
}
int Sach::getNamPhatHanh()
{
	return nNamPhatHanh;
}
int Sach::getTriGia()
{
	return nTriGia;
}
string Sach::getNXB()
{
	return sNXB;
}
string Sach::getTacGia()
{
	return sTacGia;
}
string Sach::getTuaDe()
{
	return sTuaDe;
}
string Sach::getMaSach()
{
	return sMaSach;
}
void Sach::output()
{
	cout << "Ma sach: " << sMaSach << endl;
	cout << "Tua de: " << sTuaDe << endl;
	cout << "Tac gia: " << sTacGia << endl;
	cout << "Nha xuat ban: " << sNXB << endl;
	cout << "Tri gia: " << nTriGia << endl;
	cout << "Nam phat hanh: " << nNamPhatHanh << endl;
	cout << "So trang: " << nSoTrang << endl;
	cout << "Ngay nhap kho: "; NgayNhapKho.output();
	cout << "Tinh trang: " << nTinhTrang << endl;
}