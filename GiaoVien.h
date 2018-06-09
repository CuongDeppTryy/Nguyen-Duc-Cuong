#pragma once
#include "BanDoc.h"
class GiaoVien :
	public BanDoc
{
private:
	string sDiaChi, sSDT;
public:
	GiaoVien(string sMaBanDoc, Date NgayDangKi, string sHoTen, string sKhoa, int nType, string sDiaChi, string sSDT): BanDoc(sMaBanDoc,NgayDangKi,sHoTen,sKhoa, nType)
	{
		this->sDiaChi = sDiaChi;
		this->sSDT = sSDT;
	}
	GiaoVien(): BanDoc(sMaBanDoc,NgayDangKi,sHoTen,sKhoa, nType)
	{
		sDiaChi = "";
		sSDT = "";
	}
	void ghiThongTin();
	void setSDT(string sSDT);
	void setDiaChi(string sDiaChi);
	string getSDT();
	string getDiaChi();
	void output();
	~GiaoVien(void){};
};