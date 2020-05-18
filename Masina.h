#ifndef MASINA_H
#define MASINA_H

#include <string>

using namespace std;

class Masina
{
public:

    virtual string& GetCuloare() = 0;
    virtual const string& GetNume() const = 0;
    virtual const int& GetAnFabricatie() const = 0;
    virtual const bool& MasinaNoua() const = 0;
    virtual const double& GetPret() const = 0;
    virtual void SetCuloare(const string& color) const = 0;
    Masina(const string& name, const int& an_fabr, const string& color, const bool& nouu, const double& prett);
    virtual ~Masina();

    friend istream& operator >> (istream& in, Masina& masina);
    friend ostream& operator << (ostream& out, const Masina& masina);

    void afisare(ostream &out) const = 0;
    void citire(istream &in) = 0;

protected:

            string culoare;
    const   string nume;
    const   int an_fabricatie;
    const   bool nou;
    const   double pret;
};

#endif // MASINA_H
