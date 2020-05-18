#include "Masina_Mini.h"

Masina_Mini::Masina_Mini(const string& name, const int& an, const string& color, const bool& nouu, const double& prett)
: Masina(name, an, color, nouu, prett)
{

}

const string& Masina_Mini::GetNume() const
{
    return nume;
}

const int& Masina_Mini::GetAnFabricatie() const
{
    return an_fabricatie;
}

string& Masina_Mini::GetCuloare()
{
    return culoare;
}

const bool& Masina_Mini::MasinaNoua() const
{
    return nou;
}


void Masina_Mini::SetCuloare(const string& color)
{
    culoare = color;
}

const double& Masina_Mini::GetPret() const
{
    return pret;
}

Masina_Mini::~Masina_Mini()
{
    culoare.clear();
}
