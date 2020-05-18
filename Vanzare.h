#ifndef VANZARE_H
#define VANZARE_H

#include <vector>
#include "Masina.h"
#include "Masina_mica.h"
#include "Masina_Mini.h"
#include "Masina_compacta.h"
#include "Masina_Monovolum.h"

using namespace std;

template <class T>
class Vanzare
{

public:

    static int& GetNrMasiniStoc();
    static int& GetNrTotalVandute();
    static void AfisareMasiniStoc();
    static void AfisareMasiniVandute();

    static void insertCar(T* car);
    static void sellCar(int id);

private:

    static int total_counter;
    static int total_vandute;
    static vector<Masina*> stoc;
    static vector<Masina*> masini_vandute;

};

#endif // VANZARE_H

template <class T>
int Vanzare<T>::total_counter = 0;

template <class T>
int Vanzare<T>::total_vandute = 0;

template <class T>
vector<Masina*> Vanzare<T>::stoc = {};

template <class T>
vector<Masina*> Vanzare<T>::masini_vandute = {};

template<class T>
int& Vanzare<T>::GetNrMasiniStoc()
{
    return total_counter;
}

template<class T>
int& Vanzare<T>::GetNrTotalVandute()
{
    return total_vandute;
}

template <class T>
void Vanzare<T>::AfisareMasiniStoc()
{
    for(int i = 0; i < total_counter; i++)
        (*(stoc[i])).Afisare();
}

template <class T>
void Vanzare<T>::AfisareMasiniVandute()
{
    for(int i = 0; i < total_vandute; i++)
        (*(masini_vandute[i])).Afisare();
}

template <class T>
void Vanzare<T>::insertCar(T* car)
{
    total_counter++;
    stoc.push_back(car);

    Masina_mica* masina_mica = dynamic_cast<Masina_mica*>(car);
    if(masina_mica != NULL)
        cout << "\n\nMasina Mica inserata\n\n";

    Masina_Mini* masina_mini = dynamic_cast<Masina_Mini*>(car);
    if(masina_mini != NULL)
        cout << "\n\nMasina Mini inserata\n\n";

    Masina_compacta* masina_compacta = dynamic_cast<Masina_compacta*>(car);
    if(masina_compacta != NULL)
        cout << "\n\nMasina Compacta inserata\n\n";

    Masina_Monovolum* masina_monovolum = dynamic_cast<Masina_Monovolum*>(car);
    if(masina_monovolum != NULL)
        cout << "\n\nMasina Monovolum inserata\n\n";
}

template <class T>
void Vanzare<T>::sellCar(int id)
{
    try
    {
        Masina_mica* masina_mica = dynamic_cast<Masina_mica*>(stoc[id - 1]);
        if(masina_mica != NULL)
        {
            cout << "\n\nMasina mica vanduta\n";
            masini_vandute.push_back(masina_mica);
            stoc.erase(stoc.begin() + id - 1);
            total_vandute++;
            total_counter--;
            return;
        }

        Masina_Mini* masina_mini = dynamic_cast<Masina_Mini*>(stoc[id - 1]);
        if(masina_mini != NULL)
        {
            cout << "\n\nMasina Mini vanduta\n";
            masini_vandute.push_back(masina_mini);
            stoc.erase(stoc.begin() + id - 1);
            total_vandute++;
            total_counter--;
            return;
        }

        Masina_compacta* masina_compacta = dynamic_cast<Masina_compacta*>(stoc[id - 1]);
        if(masina_compacta != NULL)
        {
            cout << "\n\nMasina compacta vanduta\n\n";
            masini_vandute.push_back(masina_compacta);
            stoc.erase(stoc.begin() + id - 1);
            total_vandute++;
            total_counter--;
            return;
        }

        Masina_Monovolum* masina_monovolum = dynamic_cast<Masina_Monovolum*>(stoc[id - 1]);
        if(masina_monovolum != NULL)
        {
            cout << "\n\nMasina Monovolum vanduta\n\n";
            masini_vandute.push_back(masina_monovolum);
            stoc.erase(stoc.begin() + id - 1);
            total_vandute++;
            total_counter--;
            return;
        }
        throw -1;
    }
    catch(int x)
    {
        if(x == -1)
            cout << "\nEroare la castare\n";
    }

}
