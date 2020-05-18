#ifndef MASINA_MONOVOLUM_H
#define MASINA_MONOVOLUM_H

#include "Masina.h"

class Masina_Monovolum: public Masina
{
public:

    Masina_Monovolum(const string& name, const int& an_fabricatie, const string& culoare, const bool& nouu, const int& nr_persoane, const string& model, const double& prett);
    ~Masina_Monovolum();

    string& GetCuloare();
    const string& GetNume() const;
    const int& GetAnFabricatie() const;
    const bool& MasinaNoua() const;
    void SetCuloare(const string& color);
    const string& GetModel() const;
    const double& GetPret() const;
    const double& GetPretRedus(const int& an_cumparare, const int& luna_cumparare) const;

private:

    const int nr_pers;
    const string model;
};

#endif // MASINA_MONOVOLUM_H
