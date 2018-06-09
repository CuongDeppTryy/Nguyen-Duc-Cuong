#pragma once
#include "Date.h"
class Sach
{
private:
	string sMaSach, sTuaDe, sTacGia, sNXB;
	int nTriGia;
	int nNamPhatHanh;
	int nSoTrang;
	Date NgayNhapKho;
	int nTinhTrang;
public:
	Sach(string sMaSach, string sTuaDe, string sTacGia, string sNXB, int nTriGia, int nNamPhatHanh, int nSoTrang, Date NgayNhapKho, int nTinhTrang)
	{
		this->sMaSach = sMaSach;
		this->sTuaDe = sTuaDe;
		this->sTacGia = sTacGia;
		this->sNXB = sNXB;
		this->nTriGia = nTriGia;
		this->nNamPhatHanh = nNamPhatHanh;
		this->nSoTrang = nSoTrang;
		this->NgayNhapKho = NgayNhapKho;
		this->nTinhTrang = nTinhTrang;
	}
	int getNgayNhapKho();
	int getThangNhapKho();
	int getNamNhapKho();
	void setTinhTrang(int nTinhTrang);
	void setSoTrang(int nSoTrang);
	void setNamPhatHanh(int nNamPhatHanh);
	void setTriGia(int nTriGia);
	void setNXB(string sNXB);
	void setTacGia(string sTacGia);
	void setTuaDe(string sTuaDe);
	void setMaSach(string sMaSach);
	int getTinhTrang();
	int getSoTrang();
	int getNamPhatHanh();
	int getTriGia();
	string getNXB();
	string getTacGia();
	string getTuaDe();
	string getMaSach();
	void output();
	~Sach(void){};
};