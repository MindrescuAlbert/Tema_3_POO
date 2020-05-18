#include "Masina_mica.h"

Masina_mica::Masina_mica(const string& name, const int& an, const string& color, const bool& nouu, const double& prett)
: Masina(name, an, color, nouu, prett)
{

}

string& Masina_mica::GetNume()
{
    return nume;
}

int& Masina_mica::GetAnFabricatie()
{
    return an_fabricatie;
}

string& Masina_mica::GetCuloare()
{
    return culoare;
}

bool& Masina_mica::MasinaNoua()
{
    return nou;
}

void Masina_mica::SetCuloare(const string& color)
{
    culoare = color;
}

double& Masina_mica::GetPret()
{
    return pret;
}

Masina_mica::~Masina_mica()
{
    culoare.clear();
}

Masina_mica& Masina_mica::operator=(const Masina_mica& masina_mica)
{
    culoare = masina_mica.culoare;
    nume = masina_mica.nume;
    an_fabricatie = masina_mica.an_fabricatie;
    nou = masina_mica.nou;
    pret = masina_mica.pret;
    return *this;
}

void Masina_mica::Afisare() const
{
    cout << "\n" <<  "Masina MICA" << "\n" << "Model: " << nume << "\n" << "An fabricatie: " << an_fabricatie << "\n" << "Culoare: " << culoare <<
            "\n" << "Noua: " << nou << "\n" << "Pret: " << pret << "\n" << "Numar roti: " << roti << "\n" << "Numar geamuri: " << geamuri << "\n";
}

istream& operator >> (istream& in, Masina_mica& masina_mica)
{

    in >> masina_mica.nume >> masina_mica.an_fabricatie >> masina_mica.culoare >> masina_mica.nou >> masina_mica.pret;
}
