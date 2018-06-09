#include "GiaoVien.h"
void GiaoVien::ghiThongTin()
{
	ofstream ofile;
	ofile.open("BanDoc.dat", ios::app);
	ofile << getDiaChi() << '#';
	ofile << getSDT();
	ofile.close();
}
void GiaoVien::setSDT(string sSDT)
{
	this->sSDT = sSDT;
}
void GiaoVien::setDiaChi(string sDiaChi)
{
	this->sDiaChi = sDiaChi;
}
string GiaoVien::getSDT()
{
	return sSDT;
}
string GiaoVien::getDiaChi()
{
	return sDiaChi;
}
void GiaoVien::output()
{
	BanDoc::outputBanDoc();
	cout << "Dia chi: " << sDiaChi << endl;
	cout << "SDT: " << sSDT << endl;
}