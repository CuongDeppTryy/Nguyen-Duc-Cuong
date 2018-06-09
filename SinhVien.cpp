#include "SinhVien.h"
void SinhVien::ghiThongTin()
{
	ofstream ofile;
	ofile.open("BanDoc.dat", ios::app);
	ofile << getKhoaHoc();
	ofile.close();
}
void SinhVien::setKhoaHoc(string sKhoaHoc)
{
	this->sKhoaHoc = sKhoaHoc;
}
string SinhVien::getKhoaHoc()
{
	return sKhoaHoc;
}
void SinhVien::output()
{
	BanDoc::outputBanDoc();
	cout << "Khoa hoc: " << sKhoaHoc << endl;
}