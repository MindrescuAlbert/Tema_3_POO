#ifndef MASINA_MICA_H
#define MASINA_MICA_H

#include "Masina.h"

class Masina_mica: public Masina
{

public:

    string& GetCuloare();
    string& GetNume();
    int& GetAnFabricatie();
    bool& MasinaNoua();
    double& GetPret();

    void SetCuloare(const string& color);
    Masina_mica(const string& name, const int& an_fabricatie, const string& culoare, const bool& nou, const double& prett);
    ~Masina_mica();

    Masina_mica& operator=(const Masina_mica& masina_mica);

    friend istream& operator >> (istream& in, Masina_mica& masina_mica);
    void Afisare() const;

};

#endif // MASINA_MICA_H
