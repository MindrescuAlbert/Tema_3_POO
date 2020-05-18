#ifndef MASINA_MINI_H
#define MASINA_MINI_H

#include "Masina.h"

class Masina_Mini: public Masina
{

public:

    Masina_Mini(const string& name, const int& an_fabricatie, const string& culoare, const bool& nouu, const double& prett);
    ~Masina_Mini();

    const string& GetNume() const ;
    const int& GetAnFabricatie() const;
    string& GetCuloare();
    const bool& MasinaNoua() const;
    const double& GetPret() const;

    void SetCuloare(const string& color);
};

#endif // MASINA_MINI_H
