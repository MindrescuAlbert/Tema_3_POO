#ifndef MASINA_MINI_H
#define MASINA_MINI_H

#include "Masina.h"

class Masina_Mini: public Masina
{

public:

    Masina_Mini(const string& name, const int& an_fabricatie, const string& culoare, const bool& nouu, const double& prett);
    ~Masina_Mini();

    string& GetCuloare();
    string& GetNume();
    int& GetAnFabricatie();
    bool& MasinaNoua();
    double& GetPret();

    void SetCuloare(const string& color);

    Masina_Mini& operator=(const Masina_Mini& masina_Mini);

    friend istream& operator >> (istream& in, Masina_Mini& masina_mini);
    void Afisare() const;
};

#endif // MASINA_MINI_H
