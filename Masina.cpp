#include "Masina.h"

Masina::Masina(const string& name, const int& an_fabr, const string& color, const bool& nouu, const double& prett)
: nume(name), an_fabricatie(an_fabr), culoare(color), nou(nouu), pret(prett)
{

}

Masina::~Masina()
{

}

const int& Masina::GetNrGeamuri() const
{
    return geamuri;
}

const int& Masina::GetNrRoti() const
{
    return roti;
}


