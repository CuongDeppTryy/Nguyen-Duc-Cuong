#include "PhieuMuon.h"
void PhieuMuon::setTrangThai(int nTrangThai)
{
	this->nTrangThai = nTrangThai;
}
int PhieuMuon::getTrangThai()
{
	return nTrangThai;
}
int PhieuMuon::getNgayMuon()
{
	return NgayMuon.getNgay();
}
int PhieuMuon::getThangMuon()
{
	return NgayMuon.getThang();
}
int PhieuMuon::getNamMuon()
{
	return NgayMuon.getNam();
}
int PhieuMuon::getTongPM()
{
	return nTongPM;
}
void PhieuMuon::tinhNgayTra(Date NgayMuon)
{
	int nN = NgayMuon.getNgay() + 7, nT = NgayMuon.getThang(), nNM = NgayMuon.getNam();
a:
	if(nNM % 4 == 0)
	{
b:
		if(nT > 12)
		{
			nNM += nT / 12;
			nT %= 12;
			goto a;
		}
		switch(nT)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(nN > 31)
			{
				nT += nN / 31;
				nN %= 31;
				goto b;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(nN > 30)
			{
				nT += nN / 30;
				nN %= 30;
				goto b;
			}
			break;
		case 2:
			if(nN > 29)
			{
				nT += nN / 29;
				nN %= 29;
				goto b;
			}
			break;
		}
	}
	else
	{
c:
		if(nT > 12)
		{
			nNM += nT / 12;
			nT %= 12;
			goto a;
		}
		switch(nT)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(nN > 31)
			{
				nT += nN / 31;
				nN %= 31;
				goto c;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(nN > 30)
			{
				nT += nN / 30;
				nN %= 30;
				goto b;
			}
			break;
		case 2:
			if(nN > 28)
			{
				nT += nN / 28;
				nN %= 28;
				goto b;
			}
			break;
		}
	}
	NgayTra.setNgay(nN);
	NgayTra.setThang(nT);
	NgayTra.setNam(nNM);
}
void PhieuMuon::setMaSach(string sMaSach)
{
	this->sMaSach = sMaSach;
}
void PhieuMuon::setMaBanDoc(string sMaBanDoc)
{
	this->sMaBanDoc = sMaBanDoc;
}
void PhieuMuon::setSTTPM(int nSTTPhieuMuon)
{
	this->nSTTPhieuMuon = nSTTPhieuMuon;
}
string PhieuMuon::getMaSach()
{
	return sMaSach;
}
string PhieuMuon::getMaBanDoc()
{
	return sMaBanDoc;
}
int PhieuMuon::getSTTPM()
{
	return nSTTPhieuMuon;
}
void PhieuMuon::output()
{
	cout << "So thu tu phieu muon: " << nSTTPhieuMuon << endl;
	cout << "Ma ban doc: " << sMaBanDoc << endl;
	cout << "Ma sach: " << sMaSach << endl;
	cout << "Ngay muon: "; NgayMuon.output();
	cout << "Ngay tra: "; NgayTra.output();
}