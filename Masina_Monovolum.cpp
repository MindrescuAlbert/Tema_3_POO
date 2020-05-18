#include "Masina_Monovolum.h"

Masina_Monovolum::Masina_Monovolum(const string& name, const int& an, const string& color, const bool& nouu, const int& nr_persoane, const string& modell, const double& prett)
: Masina(name, an, color, nouu, pret), nr_pers(nr_persoane), model(modell)
{

}

Masina_Monovolum::~Masina_Monovolum()
{
    culoare.clear();
}

string& Masina_Monovolum::GetNume()
{
    return nume;
}

string& Masina_Monovolum::GetModel()
{
    return model;
}


int& Masina_Monovolum::GetAnFabricatie()
{
    return an_fabricatie;
}

string& Masina_Monovolum::GetCuloare()
{
    return culoare;
}

bool& Masina_Monovolum::MasinaNoua()
{
    return nou;
}


void Masina_Monovolum::SetCuloare(const string& color)
{
    culoare = color;
}

double& Masina_Monovolum::GetPret()
{
    return pret;
}

double Masina_Monovolum::GetPretRedus(const int& an_cumparare, const int& luna_cumparare)
{
    if(luna_cumparare >= 6 && luna_cumparare <= 8)
        return 9 * pret / 10;

    return (100 - (an_cumparare - an_fabricatie)) * pret / 100;
}

Masina_Monovolum& Masina_Monovolum::operator=(const Masina_Monovolum& masina_monovolum)
{
    culoare = masina_monovolum.culoare;
    nume = masina_monovolum.nume;
    an_fabricatie = masina_monovolum.an_fabricatie;
    nou = masina_monovolum.nou;
    pret = masina_monovolum.pret;
    nr_pers = masina_monovolum.nr_pers;
    model = masina_monovolum.model;
    return *this;
}

void Masina_Monovolum::Afisare() const
{
    cout << "\n" <<  "Masina MONOVOLUM" << "\n" << "Model: " << nume << "\n" << "An fabricatie: " << an_fabricatie << "\n" << "Culoare: " << culoare <<
            "\n" << "Noua: " << nou << "\n" << "Pret: " << pret << "\n" << "Numar maxim persoane: " << nr_pers << "\n" << "Model: " << model << "\n"
                 << "Numar roti: " << roti << "\n" << "Numar geamuri: " << geamuri << "\n";
}

istream& operator >> (istream& in, Masina_Monovolum& masina_monovolum)
{
    in >> masina_monovolum.nume >> masina_monovolum.an_fabricatie >> masina_monovolum.culoare >> masina_monovolum.nou >> masina_monovolum.pret >> masina_monovolum.nr_pers >> masina_monovolum.model;
}

