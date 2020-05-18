#include "Masina_Mini.h"

Masina_Mini::Masina_Mini(const string& name, const int& an, const string& color, const bool& nouu, const double& prett)
: Masina(name, an, color, nouu, prett)
{

}

string& Masina_Mini::GetNume()
{
    return nume;
}

int& Masina_Mini::GetAnFabricatie()
{
    return an_fabricatie;
}

string& Masina_Mini::GetCuloare()
{
    return culoare;
}

bool& Masina_Mini::MasinaNoua()
{
    return nou;
}


void Masina_Mini::SetCuloare(const string& color)
{
    culoare = color;
}

double& Masina_Mini::GetPret()
{
    return pret;
}

Masina_Mini::~Masina_Mini()
{
    culoare.clear();
}

Masina_Mini& Masina_Mini::operator=(const Masina_Mini& masina_Mini)
{
    culoare = masina_Mini.culoare;
    nume = masina_Mini.nume;
    an_fabricatie = masina_Mini.an_fabricatie;
    nou = masina_Mini.nou;
    pret = masina_Mini.pret;
    return *this;
}

void Masina_Mini::Afisare() const
{
    cout << "\n" <<  "Masina MINI" << "\n" << "Model: " << nume << "\n" << "An fabricatie: " << an_fabricatie << "\n" << "Culoare: " << culoare <<
            "\n" << "Noua: " << nou << "\n" << "Pret: " << pret << "\n" << "Numar roti: " << roti << "\n" << "Numar geamuri: " << geamuri << "\n";
}

istream& operator >> (istream& in, Masina_Mini& masina_mini)
{

    in >> masina_mini.nume >> masina_mini.an_fabricatie >> masina_mini.culoare >> masina_mini.nou >> masina_mini.pret;
}
