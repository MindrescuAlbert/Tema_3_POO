#include "Masina.h"

Masina::Masina(const string& name, const int& an_fabr, const string& color, const bool& nouu, const double& prett)
: nume(name), an_fabricatie(an_fabr), culoare(color), nou(nouu), pret(prett)
{

}

Masina::~Masina()
{

}

istream& operator >> (istream &in, Masina& masina)
{
    masina.citire(in);
    return in;
}

ostream& operator << (ostream &out, const Masina& masina)
{
    masina.afisare(out);
    return out;
}

