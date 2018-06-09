#include "Date.h"
void Date::setNam(int nNM)
{
	this->nNM = nNM;
}
void Date::setThang(int nT)
{
	this->nT = nT;
}
void Date::setNgay(int nN)
{
	this->nN = nN;
}
int Date::getNam()
{
	return nNM;
}
int Date::getThang()
{
	return nT;
}
int Date::getNgay()
{
	return nN;
}
void Date::output()
{
	cout << nN << "/" << nT << "/" << nNM << endl;
}