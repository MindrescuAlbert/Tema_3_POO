#include "Masina_compacta.h"

Masina_compacta::Masina_compacta(const string& name, const int& an, const string& color, const bool& nouu, const double& prett)
: Masina(name, an, color, nouu, prett)
{

}

string& Masina_compacta::GetNume()
{
    return nume;
}

int& Masina_compacta::GetAnFabricatie()
{
    return an_fabricatie;
}

string& Masina_compacta::GetCuloare()
{
    return culoare;

}

bool& Masina_compacta::MasinaNoua()
{
    return nou;
}


void Masina_compacta::SetCuloare(const string& color)
{
    culoare = color;
}

double& Masina_compacta::GetPret()
{
    return pret;
}

Masina_compacta::~Masina_compacta()
{
    culoare.clear();
}

Masina_compacta& Masina_compacta::operator=(const Masina_compacta& masina_compacta)
{
    culoare = masina_compacta.culoare;
    nume = masina_compacta.nume;
    an_fabricatie = masina_compacta.an_fabricatie;
    nou = masina_compacta.nou;
    pret = masina_compacta.pret;
    return *this;
}

void Masina_compacta::Afisare() const
{
    cout << "\n" <<  "Masina COMPACTA" << "\n" << "Model: " << nume << "\n" << "An fabricatie: " << an_fabricatie << "\n" << "Culoare: " << culoare <<
            "\n" << "Noua: " << nou << "\n" << "Pret: " << pret << "\n" << "Numar roti: " << roti << "\n" << "Numar geamuri: " << geamuri << "\n";
}

istream& operator >> (istream& in, Masina_compacta& masina_compacta)
{

    in >> masina_compacta.nume >> masina_compacta.an_fabricatie >> masina_compacta.culoare >> masina_compacta.nou >> masina_compacta.pret;
}

