#pragma once
#include "PhieuMuon.h"
class TaiKhoan
{
private:
	string sUsername, sPassword;
public:
	TaiKhoan(string sUsername = "", string sPassword = "")
	{
		this->sUsername = sUsername;
		this->sPassword = sPassword;
	}
	string getMatKhau();
	string getTaiKhoan();
	~TaiKhoan(void){};
};