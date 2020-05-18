#ifndef MASINA_MICA_H
#define MASINA_MICA_H

#include "Masina.h"

class Masina_mica: public Masina
{

public:

    string& GetCuloare();
    const string& GetNume() const;
    const int& GetAnFabricatie() const;
    const bool& MasinaNoua() const;
    const double& GetPret() const;

    void SetCuloare(const string& color);

    void citire(istream &in);
    void afisare(ostream &out) const;

    Masina_mica(const string& name, const int& an_fabricatie, const string& culoare, const bool& nou, const double& prett);
    ~Masina_mica();

};

#endif // MASINA_MICA_H
