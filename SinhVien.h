#pragma once
#include "GiaoVien.h"
class SinhVien :
	public BanDoc
{
private:
	string sKhoaHoc;
public:
	SinhVien(string sMaBanDoc, Date NgayDangKi, string sHoTen, string sKhoa, int nType, string sKhoaHoc): BanDoc(sMaBanDoc,NgayDangKi,sHoTen,sKhoa, nType)
	{
		this->sKhoaHoc = sKhoaHoc;
	}
	SinhVien(): BanDoc(sMaBanDoc,NgayDangKi,sHoTen,sKhoa, nType)
	{
		sKhoaHoc = "";
	}
	void ghiThongTin();
	void setKhoaHoc(string sKhoaHoc);
	string getKhoaHoc();
	void output();
	~SinhVien(void){};
};