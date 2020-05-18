#ifndef MASINA_COMPACTA_H
#define MASINA_COMPACTA_H

#include "Masina.h"

class Masina_compacta: public Masina
{
public:

    Masina_compacta(const string& name, const int& an_fabricatie, const string& culoare, const bool& nouu, const double& prett);
    ~Masina_compacta();

    string& GetCuloare();
    const string& GetNume() const;
    const int& GetAnFabricatie() const;
    const bool& MasinaNoua() const;
    const double& GetPret() const;

    void SetCuloare(const string& color);
};

#endif // MASINA_COMPACTA_H
