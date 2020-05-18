#include "Masina_compacta.h"

Masina_compacta::Masina_compacta(const string& name, const int& an, const string& color, const bool& nouu, const double& prett)
: Masina(name, an, color, nouu, prett)
{

}

const string& Masina_compacta::GetNume() const
{
    return nume;
}

const int& Masina_compacta::GetAnFabricatie() const
{
    return an_fabricatie;
}

string& Masina_compacta::GetCuloare()
{
    return culoare;

}

const bool& Masina_compacta::MasinaNoua() const
{
    return nou;
}


void Masina_compacta::SetCuloare(const string& color)
{
    culoare = color;
}

const double& Masina_compacta::GetPret() const
{
    return pret;
}

Masina_compacta::~Masina_compacta()
{
    culoare.clear();
}
