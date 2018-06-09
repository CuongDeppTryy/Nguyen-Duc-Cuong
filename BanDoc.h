#pragma once
#include "Sach.h"
class BanDoc
{
protected:
	string sMaBanDoc;
	Date NgayDangKi;
	string sHoTen, sKhoa;
	int nType;
public:
	virtual void output() = 0;
	virtual void ghiThongTin() = 0;
	BanDoc(string sMaBanDoc, Date NgayDangKi, string sHoTen, string sKhoa, int nType)
	{
		this->sMaBanDoc = sMaBanDoc;
		this->NgayDangKi = NgayDangKi;
		this->sHoTen = sHoTen;
		this->sKhoa = sKhoa;
		this->nType = nType;
	}
	int getType();
	int getNgayDangKi();
	int getThangDangKi();
	int getNamDangKi();
	void setKhoa(string sKhoa);
	void setHoTen(string sHoTen);
	void setMaBanDoc(string sMaBanDoc);
	string getKhoa();
	string getHoTen();
	string getMaBanDoc();
	void outputBanDoc();
	~BanDoc(void){};
};