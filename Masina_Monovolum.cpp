#include "Masina_Monovolum.h"

Masina_Monovolum::Masina_Monovolum(const string& name, const int& an, const string& color, const bool& nouu, const int& nr_persoane, const string& modell, const double& prett)
: Masina(name, an, color, nouu, pret), nr_pers(nr_persoane), model(modell)
{

}

Masina_Monovolum::~Masina_Monovolum()
{
    culoare.clear();
}

const string& Masina_Monovolum::GetNume() const
{
    return nume;
}

const string& Masina_Monovolum::GetModel() const
{
    return model;
}


const int& Masina_Monovolum::GetAnFabricatie() const
{
    return an_fabricatie;
}

string& Masina_Monovolum::GetCuloare()
{
    return culoare;
}

const bool& Masina_Monovolum::MasinaNoua() const
{
    return nou;
}


void Masina_Monovolum::SetCuloare(const string& color)
{
    culoare = color;
}

const double& Masina_Monovolum::GetPret() const
{
    return pret;
}

const double& Masina_Monovolum::GetPretRedus(const int& an_cumparare, const int& luna_cumparare) const
{
    if(luna_cumparare >= 6 && luna_cumparare <= 8)
        return 9 * pret / 10;

    return (100 - (an_cumparare - an_fabricatie)) * pret / 100;
}

