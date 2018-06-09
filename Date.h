#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include<time.h>
#include<list>
#include<Windows.h>
using namespace std;
class Date
{
private:
	int nN, nT, nNM;
public:
	Date(int nN = 0, int nT = 0, int nNM = 0)
	{
		this->nN = nN;
		this->nT = nT;
		this->nNM = nNM;
	}
	void setNam(int nNM);
	void setThang(int nT);
	void setNgay(int nN);
	int getNam();
	int getThang();
	int getNgay();
	void output();
	~Date(void){};
};