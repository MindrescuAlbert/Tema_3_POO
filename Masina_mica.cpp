#include "Masina_mica.h"

Masina_mica::Masina_mica(const string& name, const int& an, const string& color, const bool& nouu, const double& prett)
: Masina(name, an, color, nouu, prett)
{

}

const string& Masina_mica::GetNume() const
{
    return nume;
}

const int& Masina_mica::GetAnFabricatie() const
{
    return an_fabricatie;
}

string& Masina_mica::GetCuloare()
{
    return culoare;
}

const bool& Masina_mica::MasinaNoua() const
{
    return nou;
}

void Masina_mica::SetCuloare(const string& color)
{
    culoare = color;
}

const double& Masina_mica::GetPret() const
{
    return pret;
}

Masina_mica::~Masina_mica()
{
    culoare.clear();
}

void Masina_mica::citire (istream& in)
{
    in >>
}
