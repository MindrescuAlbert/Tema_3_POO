#ifndef MASINA_COMPACTA_H
#define MASINA_COMPACTA_H

#include "Masina.h"

class Masina_compacta: public Masina
{
public:

    Masina_compacta(const string& name, const int& an_fabricatie, const string& culoare, const bool& nouu, const double& prett);
    ~Masina_compacta();

    string& GetCuloare();
    string& GetNume();
    int& GetAnFabricatie();
    bool& MasinaNoua();
    double& GetPret();

    void SetCuloare(const string& color);

    Masina_compacta& operator=(const Masina_compacta& masina_compacta);
    friend istream& operator >> (istream& in, Masina_compacta& masina_compacta);
    void Afisare() const;
};

#endif // MASINA_COMPACTA_H
