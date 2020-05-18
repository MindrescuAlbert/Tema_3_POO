#ifndef MASINA_MONOVOLUM_H
#define MASINA_MONOVOLUM_H

#include "Masina.h"

class Masina_Monovolum: public Masina
{
public:

    Masina_Monovolum(const string& name, const int& an_fabricatie, const string& culoare, const bool& nouu, const int& nr_persoane, const string& model, const double& prett);
    ~Masina_Monovolum();

    string& GetCuloare();
    void SetCuloare(const string& color);
    string& GetNume();
    int& GetAnFabricatie();
    bool& MasinaNoua();
    string& GetModel();
    double& GetPret();
    double GetPretRedus(const int& an_cumparare, const int& luna_cumparare);

    Masina_Monovolum& operator=(const Masina_Monovolum& masina_Monovolum);
    friend istream& operator >> (istream& in, Masina_Monovolum& masina_monovolum);
    void Afisare() const;

private:

    int nr_pers;
    string model;
};

#endif // MASINA_MONOVOLUM_H
