#pragma once
#include "SinhVien.h"
class PhieuMuon
{
private:
	static int nTongPM;
	int nSTTPhieuMuon;
	string sMaBanDoc, sMaSach;
	Date NgayMuon, NgayTra;
	int nTrangThai;
public:
	PhieuMuon(int nSTTPhieuMuon, string sMaBanDoc, string sMaSach, Date NgayMuon, int nTrangThai)
	{
		nTongPM++;
		this->nSTTPhieuMuon = nSTTPhieuMuon;
		this->sMaBanDoc = sMaBanDoc;
		this->sMaSach = sMaSach;
		this->NgayMuon = NgayMuon;
		this->nTrangThai = nTrangThai;
		tinhNgayTra(NgayMuon);
	}
	void setTrangThai(int nTrangThai);
	int getTrangThai();
	static int getTongPM();
	int getNgayMuon();
	int getThangMuon();
	int getNamMuon();
	void tinhNgayTra(Date NgayMuon);
	void setMaSach(string sMaSach);
	void setMaBanDoc(string sMaBanDoc);
	void setSTTPM(int nSTTPhieuMuon);
	string getMaSach();
	string getMaBanDoc();
	int getSTTPM();
	void output();
	~PhieuMuon(void){};
};