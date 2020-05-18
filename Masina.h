#ifndef MASINA_H
#define MASINA_H

#include <string>
#include <iostream>

using namespace std;

class Masina
{
public:

    virtual string& GetCuloare() = 0;
    virtual string& GetNume() = 0;
    virtual int& GetAnFabricatie() = 0;
    virtual bool& MasinaNoua() = 0;
    virtual double& GetPret() = 0;
    virtual void SetCuloare(const string& color) = 0;
    virtual const int& GetNrRoti() const;
    virtual const int& GetNrGeamuri() const;

    Masina(const string& name, const int& an_fabr, const string& color, const bool& nouu, const double& prett);
    virtual ~Masina();

    virtual void Afisare() const = 0;

protected:

    string culoare;
    string nume;
    int an_fabricatie;
    bool nou;
    double pret;

    const int roti = 4;
    const int geamuri = 4;
};

#endif // MASINA_H
