#include "TaiKhoan.h"
#include<iostream>
void docSach(list <Sach> &S);
void docBanDoc(list <BanDoc*> &B);
void docPhieuMuon(list <PhieuMuon> &P);
int PhieuMuon::nTongPM = 0;
void docTaiKhoan(list <TaiKhoan> &T);
void ghiPhieuMuon(list <PhieuMuon> P);
void ghiBanDoc(list <BanDoc*> B);
void ghiSach(list <Sach> S);
void outputTatCaSach(list <Sach> S);
void outputSachConLai(list <Sach> S);
void outputBanDoc(list <BanDoc*> B);
void dangNhap(list <TaiKhoan> T);
bool kTraMaSach(list <Sach> S, string sMaSach);
int tinhTrangSach(list <Sach> S, string sMaSach);
bool kTraMaBanDoc(list <BanDoc*> B, string sMaBanDoc);
void capNhatTinhTrangSach(list <Sach> &S, string sMaSach, int nTinhTrang);
void taoPhieuMuon(list <Sach> &S, list <BanDoc*> B, list <PhieuMuon> &P);
void taoSach(list <Sach> &S);
void taoBanDoc(list <BanDoc*> &B);
void traSachVaXoaPM(list <PhieuMuon> &P, list <Sach> &S);
void xoaSach(list <Sach> &S);
void tKeSLSachConLai(list <Sach> S);
void tKeSLSachDaDuocMuon(list <Sach> S);
void outputSach(list <Sach> S, string sMaSach);
void lKeSachCuaBanDoc(list <Sach> S, list <PhieuMuon> P);
void main()
{
	list <Sach> S;
	list <BanDoc*> B;
	list <PhieuMuon> P;
	list <TaiKhoan> T;
	docSach(S);
	docBanDoc(B);
	docPhieuMuon(P);
	docTaiKhoan(T);
	int nC;
	do
	{
		system("cls");
		cout << "*****************MENU******************\n";
		cout << "\t1. Hien thi thong tin sach\n";
		cout << "\t2. Tim kiem thong tin\n";
		cout << "\t3. Quan ly\n";
		cout << "\t4. Thoat\n";
		cout << "Chuc nang: ";
		cin >> nC;
		string sTK, sMK;
		switch(nC)
		{
		case 1:
			outputTatCaSach(S);
			break;
		case 2:
			int nC2;
			do
			{
				system("cls");
				cout << "*****************MENU******************\n";
				cout << "\t1. Hien thi thong tin sach con lai trong thu vien\n";
				cout << "\t2. Tim ban doc(yeu cau nhap ma ban doc)\n";
				cout << "\t3. Thoat\n";
				cout << "Chuc nang: ";
				cin >> nC2;
				switch(nC2)
				{
				case 1:
					outputSachConLai(S);
					break;
				case 2:
					outputBanDoc(B);
					break;
				case 3:
					break;
				default:
					cout << "Khong co chuc nang nay!\n";
				}
				if(nC2 == 1)
					system("pause");
			}while(nC2 != 3);
			break;
		case 3:
			dangNhap(T);
			int nC3;
			do
			{
				system("cls");
				cout << "*****************Quan Ly******************\n";
				cout << "\t1. Phieu muon\n";
				cout << "\t2. Sach\n";
				cout << "\t3. Tao ban doc\n";
				cout << "\t4. Thong ke\n";
				cout << "\t5. Thoat\n";
				cout << "Chuc nang: ";
				cin >> nC3;
				switch(nC3)
				{
				case 1:
					int nC4;
					do
					{
						system("cls");
						cout << "*****************Phieu muon******************\n";
						cout << "\t1. Tao phieu muon\n";
						cout << "\t2. Tra sach\n";
						cout << "\t3. Thoat\n";
						cout << "Chuc nang: "; cin >> nC4;
						switch(nC4)
						{
						case 1:
							taoPhieuMuon(S, B, P);
							break;
						case 2:
							traSachVaXoaPM(P, S);
							break;
						case 3:
							break;
						default:
							cout << "Khong co chuc nang nay!\n";
							system("pause");
						}
					}while(nC4 != 3);
					break;
				case 2:
					int nC5;
					do
					{
						system("cls");
						cout << "*****************Sach******************\n";
						cout << "\t1. Tao sach\n";
						cout << "\t2. Xoa sach\n";
						cout << "\t3. Thoat\n";
						cout << "Chuc nang: "; cin >> nC5;
						switch(nC5)
						{
						case 1:
							taoSach(S);
							break;
						case 2:
							xoaSach(S);
							break;
						case 3:
							break;
						default:
							cout << "Khong co chuc nang nay!\n";
							system("pause");
						}
					}while(nC5 != 3);
					break;
				case 3:
					taoBanDoc(B);
					break;
				case 4:
					int nC6;
					do
					{
						system("cls");
						cout << "*****************Thong ke******************\n";
						cout << "\t1. Tong so luong sach con lai trong thu vien\n";
						cout << "\t2. Tong so sach da duoc muon\n";
						cout << "\t3. Liet ke sach cua mot ban doc dang muon\n";
						cout << "\t4. Thoat\n";
						cout << "Chuc nang: "; cin >> nC6;
						switch(nC6)
						{
						case 1:
							tKeSLSachConLai(S);		
							break;
						case 2:
							tKeSLSachDaDuocMuon(S);
							break;
						case 3:
							lKeSachCuaBanDoc(S, P);
							break;
						case 4:
							break;
						default:
							cout << "Khong co chuc nang nay!\n";
						}
						if(nC6 != 4)
							system("pause");
					}while(nC6 != 4);
					break;
				case 5:
					break;
				default:
					cout << "Khong co chuc nang nay!\n";
				}
			}while(nC3 != 5);
			break;
		case 4:
			ghiSach(S);
			ghiBanDoc(B);
			ghiPhieuMuon(P);
			exit(1);
		default:
			cout << "Khong co chuc nang nay!\n";
		}
		if(nC == 1)
			system("pause");
	}while(nC != 4);
	system("pause");
}
void lKeSachCuaBanDoc(list <Sach> S, list <PhieuMuon> P)
{
	int nF = 0;
	string sMaBanDoc;
	cout << "Nhap ma ban doc can thong ke: "; fflush(stdin);
	getline(cin, sMaBanDoc);
	while(!P.empty())
	{
		if(P.front().getMaBanDoc() == sMaBanDoc)
		{
			outputSach(S, P.front().getMaSach());
			nF = 1;
		}
		P.pop_front();
	}
	if(nF == 0)
		cout << "Khong tim thay ma ban doc tuong ung!\n";
}
void outputSach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
			S.front().output();
		S.pop_front();
	}
}
void tKeSLSachDaDuocMuon(list <Sach> S)
{
	int nD;
	for(nD = 0; !S.empty(); S.pop_front())
	{
		if(S.front().getTinhTrang() != 0)
			nD++;
	}
	cout << "So sach da duoc muon: " << nD << endl;
}
void tKeSLSachConLai(list <Sach> S)
{
	int nD;
	for(nD = 0; !S.empty(); S.pop_front())
	{
		if(S.front().getTinhTrang() == 0)
			nD++;
	}
	cout << "So sach con lai trong thu vien: " << nD << endl;
}
void xoaSach(list <Sach> &S)
{
	cout << "Nhap ma sach can xoa: ";
	string sMaSach;
	getline(cin, sMaSach);
	for(list <Sach>::iterator p = S.begin(); p != S.end(); p++)
	{
		if(p->getMaSach() == sMaSach)
		{
			if(p->getTinhTrang() == 0)
			{
				S.erase(p);
				cout << "Xoa sach thanh cong!\n";
			}
			else
				cout << "Sach dang duoc muon!\n";
			system("pause");
			return;
		}
	}
	cout << "Khong tim thay ma sach tuong ung!\n";
	system("pause");
}
void traSachVaXoaPM(list <PhieuMuon> &P, list <Sach> &S)
{
	int nSTTPhieuMuon;
	cout << "Nhap so phieu muon de tra sach: ";
	cin >> nSTTPhieuMuon;
	for(list <PhieuMuon>::iterator p = P.begin(); p != P.end(); p++)
	{
		if(p->getSTTPM() == nSTTPhieuMuon)
		{
			if(p->getTrangThai() == 0)
			{
				cout << "Khong the tra sach vi phieu muon da duoc tra truoc do!\n";
				system("pause");
				return;
			}
			p->setTrangThai(0);
			capNhatTinhTrangSach(S, p->getMaSach(), 0);
			cout << "Tra sach thanh cong!\n";
			system("pause");
			return;
		}
	}
	cout << "Khong tim thay phieu muon!\n";
	system("pause");
}
void taoBanDoc(list <BanDoc*> &B)
{
	string sMaBanDoc;
	int nN, nT, nNM;
	string sHoTen, sKhoa;
	int nType;
	cout << "Nhap ma ban doc: "; fflush(stdin); getline(cin, sMaBanDoc);
	while(kTraMaBanDoc(B, sMaBanDoc))
	{
		cout << "Ma ban doc da ton tai! Hay nhap lai: ";
		fflush(stdin); getline(cin, sMaBanDoc);
	}
	cout << "Nhap ngay thang nam dang ki: "; cin >> nN >> nT >> nNM; Date NgayDangKi(nN, nT, nNM);
	cout << "Nhap ho ten: "; fflush(stdin); getline(cin, sHoTen);
	cout << "Nhap khoa: "; getline(cin, sKhoa);
	cout << "\t1. Giao vien\t2. Sinh vien\n";
	cout << "Chon loai ban doc: "; cin >> nType;
	if(nType == 1)
	{
		string sDiaChi, sSDT;
		cout << "Nhap dia chi: "; fflush(stdin); getline(cin, sDiaChi);
		cout << "Nhap so dien thoai: "; getline(cin, sSDT);
		BanDoc *BB = new GiaoVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sDiaChi, sSDT);
		B.push_back(BB);
	}
	else
	{
		string sKhoaHoc;
		cout << "Nhap khoa hoc: "; fflush(stdin); getline(cin, sKhoaHoc);
		BanDoc *BB = new SinhVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sKhoaHoc);
		B.push_back(BB);
	}
	cout << "Tao ban doc thanh cong!\n";
	system("pause");
}
void taoSach(list <Sach> &S)
{
	string sMaSach, sTuaDe, sTacGia, sNXB;
	int nTriGia;
	int nNamPhatHanh;
	int nSoTrang;
	int nN, nT, nNM;
	cout << "Nhap ma sach: "; fflush(stdin); getline(cin, sMaSach);
	cout << "Nhap tua de: "; fflush(stdin); getline(cin, sTuaDe);
	cout << "Nhap tac gia: "; fflush(stdin); getline(cin, sTacGia);
	cout << "Nhap nha xuat ban: "; fflush(stdin);getline(cin, sNXB);
	cout << "Nhap tri gia: "; cin >> nTriGia;
	cout << "Nhap nam phat hanh: "; cin >> nNamPhatHanh;
	cout << "Nhap so trang: "; cin >> nSoTrang;
	cout << "Nhap ngay thang nam nhap kho: "; cin >> nN >> nT >> nNM;
	Date NgayNhapKho(nN, nT, nNM);
	Sach SS(sMaSach, sTuaDe, sTacGia, sNXB, nTriGia, nNamPhatHanh, nSoTrang, NgayNhapKho, 0);
	S.push_back(SS);
	cout << "Tao sach thanh cong!\n";
	system("pause");
}
void taoPhieuMuon(list <Sach> &S, list <BanDoc*> B, list <PhieuMuon> &P)
{
	string sMaSach, sMaBanDoc;
	int nN, nT, nNM;
	cout << "Nhap ma sach: "; fflush(stdin);
	getline(cin, sMaSach);
	while(!kTraMaSach(S, sMaSach) || tinhTrangSach(S, sMaSach) != 0)
	{
		if(!kTraMaSach(S, sMaSach))
			cout << "Ma sach khong ton tai!\n";
		else
			cout << "Sach da duoc muon!\n";
		cout << "Hay nhap lai: ";
		getline(cin, sMaSach);
	}
	cout << "Nhap ma ban doc: ";
	getline(cin, sMaBanDoc);
	while(!kTraMaBanDoc(B, sMaBanDoc))
	{
		cout << "Ma ban doc khong ton tai! Hay nhap lai\n";
		getline(cin, sMaBanDoc);
	}
	cout << "Nhap ngay thang nam muon: "; cin >> nN >> nT >> nNM;
	Date NgayMuon(nN, nT, nNM);
	int nSTTPhieuMuon = PhieuMuon::getTongPM() + 1;
	PhieuMuon PP(nSTTPhieuMuon, sMaBanDoc, sMaSach, NgayMuon, 1);
	P.push_back(PP);
	capNhatTinhTrangSach(S, sMaSach, nSTTPhieuMuon);
	cout << "Tao phieu muon thanh cong!\n";
	system("pause");
}
void capNhatTinhTrangSach(list <Sach> &S, string sMaSach, int nTinhTrang)
{
	for(list <Sach>::iterator p = S.begin(); p != S.end(); p++)
	{
		if(p->getMaSach() == sMaSach)
		{
			p->setTinhTrang(nTinhTrang);
			return;
		}
	}
}
bool kTraMaBanDoc(list <BanDoc*> B, string sMaBanDoc)
{
	while(!B.empty())
	{
		if(B.front()->getMaBanDoc() == sMaBanDoc)
			return true;
		else
			B.pop_front();
	}
	return false;
}
int tinhTrangSach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
			return S.front().getTinhTrang();
		else
			S.pop_front();
	}
	return -1;
}
bool kTraMaSach(list <Sach> S, string sMaSach)
{
	while(!S.empty())
	{
		if(S.front().getMaSach() == sMaSach)
			return true;
		else
			S.pop_front();
	}
	return false;
}
void dangNhap(list <TaiKhoan> T)
{
	string sTK, sMK;
	cout << "Dang nhap de su dung chuc nang quan li!\n";
	cout << "Username: ";
a:
	fflush(stdin); getline(cin, sTK);
	for(list <TaiKhoan>::iterator p = T.begin(); p != T.end(); p++)
	{
		if(p->getTaiKhoan() == sTK)
		{
			cout << "Password: "; fflush(stdin); getline(cin, sMK);
			while(p->getMatKhau() != sMK)
			{
				cout << "Sai mat khau! Nhap lai: "; fflush(stdin); getline(cin, sMK);
			}
			return;
		}
	}
	cout << "Khong tim thay tai khoan! Nhap lai: ";
	goto a;
}
void outputBanDoc(list <BanDoc*> B)
{
	string sMaBanDocCanTim;
	cout << "Nhap ma ban doc can tim: ";
	fflush(stdin);
	getline(cin, sMaBanDocCanTim);
	while(!B.empty())
	{
		if(sMaBanDocCanTim == B.front()->getMaBanDoc())
		{
			B.front()->output();
			system("pause");
			return;
		}
		B.pop_front();
	}
	cout << "Khong tim thay ma ban doc tuong ung!\n";
	system("pause");
}
void outputSachConLai(list <Sach> S)
{
	cout << "\nCac sach con lai trong thu vien:\n\n";
	while(!S.empty())
	{
		if(S.front().getTinhTrang() == 0)
		{
			S.front().output();
		}
		S.pop_front();
	}
}
void outputTatCaSach(list <Sach> S)
{
	while(!S.empty())
	{
		S.front().output();
		S.pop_front();
	}
}
void ghiSach(list <Sach> S)
{
	ofstream ofile;
	ofile.open("Sach.dat");
	list <Sach>::iterator p = S.begin();
	while(p != S.end())
	{
		ofile << p->getMaSach() << '#';
		ofile << p->getTuaDe() << '#';
		ofile << p->getTacGia() << '#';
		ofile << p->getNXB() << '#';
		ofile << p->getTriGia() << '#';
		ofile << p->getNamPhatHanh() << '#';
		ofile << p->getSoTrang() << '#';
		ofile << p->getNgayNhapKho() << '/';
		ofile << p->getThangNhapKho() << '/';
		ofile << p->getNamNhapKho() << '#';
		ofile << p->getTinhTrang();
		p++;
		if(p != S.end())
			ofile << endl;
	}
	ofile.close();
}
void ghiBanDoc(list <BanDoc*> B)
{
	ofstream ofile;
	ofile.open("BanDoc.dat");
	ofile << "";
	ofile.close();
	while(!B.empty())
	{
		ofile.open("BanDoc.dat", ios::app);
		ofile << B.front()->getMaBanDoc() << '#';
		ofile << B.front()->getNgayDangKi() << '/';
		ofile << B.front()->getThangDangKi() << '/';
		ofile << B.front()->getNamDangKi() << '#';
		ofile << B.front()->getHoTen() << '#';
		ofile << B.front()->getKhoa() << '#';
		ofile << B.front()->getType() << '|';
		ofile.close();
		B.front()->ghiThongTin();
		B.pop_front();
		if(!B.empty())
		{
			ofile.open("BanDoc.dat", ios::app);
			ofile << endl;
			ofile.close();
		}
	}
}
void ghiPhieuMuon(list <PhieuMuon> P)
{
	ofstream ofile;
	ofile.open("PhieuMuon.dat");
	list <PhieuMuon>::iterator p = P.begin();
	while(p != P.end())
	{
		ofile << p->getSTTPM() << '#';
		ofile << p->getMaBanDoc() << '#';
		ofile << p->getMaSach() << '#';
		ofile << p->getNgayMuon() << '/';
		ofile << p->getThangMuon() << '/';
		ofile << p->getNamMuon() << '#';
		ofile << p->getTrangThai();
		p++;
		if(p != P.end())
			ofile << endl;
	}
	ofile.close();
}
void docTaiKhoan(list <TaiKhoan> &T)
{
	ifstream ifile;
	ifile.open("TaiKhoan.dat");
	while(!ifile.eof())
	{
		string sUsername, sPassword;
		getline(ifile, sUsername, '#');
		getline(ifile, sPassword, '\n');
		TaiKhoan TT(sUsername, sPassword);
		T.push_back(TT);
	}
	ifile.close();
}
void docPhieuMuon(list <PhieuMuon> &P)
{
	ifstream ifile;
	ifile.open("PhieuMuon.dat");
	while(!ifile.eof())
	{
		int nSTTPhieuMuon, nTrangThai;
		string sMaBanDoc, sMaSach;
		ifile >> nSTTPhieuMuon; ifile.ignore(1, '#');
		getline(ifile, sMaBanDoc, '#');
		getline(ifile, sMaSach, '#');
		int nN, nT, nNM;
		ifile >> nN; ifile.ignore(1, '/');
		ifile >> nT; ifile.ignore(1, '/');
		ifile >> nNM; ifile.ignore(1, '#');
		Date NgayMuon(nN, nT, nNM);
		ifile >> nTrangThai; ifile.ignore(1, '\n');
		PhieuMuon PP(nSTTPhieuMuon, sMaBanDoc, sMaSach, NgayMuon, nTrangThai);
		P.push_back(PP);
	}
	ifile.close();
}
void docBanDoc(list <BanDoc*> &B)
{
	ifstream ifile;
	ifile.open("BanDoc.dat");
	while(!ifile.eof())
	{
		string sMaBanDoc;
		string sHoTen, sKhoa;
		int nType;
		getline(ifile, sMaBanDoc, '#');
		int nN, nT, nNM;
		ifile >> nN; ifile.ignore(1, '/');
		ifile >> nT; ifile.ignore(1, '/');
		ifile >> nNM; ifile.ignore(1, '#');
		Date NgayDangKi(nN, nT, nNM);
		getline(ifile, sHoTen, '#');
		getline(ifile, sKhoa, '#');
		ifile >> nType; ifile.ignore(1, '|');
		if(nType == 1)
		{
			string sDiaChi, sSDT;
			getline(ifile, sDiaChi, '#');
			getline(ifile, sSDT, '\n');
			BanDoc *BB = new GiaoVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sDiaChi, sSDT);
			B.push_back(BB);
		}
		else
		{
			string sKhoaHoc;
			getline(ifile, sKhoaHoc, '\n');
			BanDoc *BB = new SinhVien(sMaBanDoc, NgayDangKi, sHoTen, sKhoa, nType, sKhoaHoc);
			B.push_back(BB);
		}
	}
	ifile.close();
}
void docSach(list <Sach> &S)
{
	ifstream ifile;
	ifile.open("Sach.dat");
	while(!ifile.eof())
	{
		string sMaSach, sTuaDe, sTacGia, sNXB;
		int nTriGia;
		int nNamPhatHanh;
		int nSoTrang;
		int nTinhTrang;
		getline(ifile, sMaSach, '#');
		getline(ifile, sTuaDe, '#');
		getline(ifile, sTacGia, '#');
		getline(ifile, sNXB, '#');
		ifile >> nTriGia; ifile.ignore(1, '#');
		ifile >> nNamPhatHanh; ifile.ignore(1, '#');
		ifile >> nSoTrang; ifile.ignore(1, '#');
		int nN, nT, nNM;
		ifile >> nN; ifile.ignore(1, '/');
		ifile >> nT; ifile.ignore(1, '/');
		ifile >> nNM; ifile.ignore(1, '#');
		Date NgayNhapKho(nN, nT, nNM);
		ifile >> nTinhTrang; ifile.ignore(1, '\n');
		Sach SS(sMaSach, sTuaDe, sTacGia, sNXB, nTriGia, nNamPhatHanh, nSoTrang, NgayNhapKho, nTinhTrang);
		S.push_back(SS);
	}
	ifile.close();
}