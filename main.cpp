#include <iostream>

#include "Masina_mica.h"
#include "Masina_Mini.h"
#include "Masina_compacta.h"
#include "Masina_Monovolum.h"
#include "Vanzare.h"

using namespace std;

int main()
{
    int operation;
    string tip;
    string culoare;
    string model;
    int an_fabricatie;
    bool nou;
    double pret;
    int nr_pers;
    string tipMonovolum;

    Vanzare<Masina> stoc;

    cout << "\n\n        Bine ati venit in parcul auto!  \n\n     ";

    while(1)
    {
        cout << "    Ce operatie doriti sa efectuati? \n\n 1. Introduceti o masina noua in stoc \n 2. Vindeti o masina. \n 3. Vizualizati stocul de masini.   \n 4. Vizualizati masinile vandute. \n 5. Parasiti parcul auto. \n Introduceti numarul operatiei: ";
        cin >> operation;

        if(operation == 1)
        {
            cout << "\n\nCe tip de masina doriti sa introduceti? Mica / Mini / Compacta / Monovolum? ";
            cin >> tip;
            try
            {
                if(tip == "Mica")
                {
                    cout << "Introduceti urmatoarele caracteristici: model(string), culoare(string), anul fabricatiei (int), daca este noua sau nu(1 / 0) si pretul masinii(double)\n";
                    cin >> model >> culoare >> an_fabricatie >> nou >> pret;
                    Masina_mica* masina_mica = new Masina_mica(model, an_fabricatie, culoare, nou, pret);
                    stoc.insertCar(masina_mica);
                }
                else if(tip == "Mini")
                {
                    cout << "Introduceti urmatoarele caracteristici: model(string), culoare(string), anul fabricatiei (int), daca este noua sau nu(1 / 0) si pretul masinii(double)\n";
                    cin >> model >> culoare >> an_fabricatie >> nou >> pret;
                    Masina_Mini* masina_mini = new Masina_Mini(model, an_fabricatie, culoare, nou, pret);
                    stoc.insertCar(masina_mini);
                }
                else if(tip == "Compacta")
                {
                    cout << "Introduceti urmatoarele caracteristici: model(string), culoare(string), anul fabricatiei (int), daca este noua sau nu(1 / 0) si pretul masinii(double)\n";
                    cin >> model >> culoare >> an_fabricatie >> nou >> pret;
                    Masina_compacta* masina_compacta = new Masina_compacta(model, an_fabricatie, culoare, nou, pret);
                    stoc.insertCar(masina_compacta);
                }
                else if(tip == "Monovolum")
                {
                    cout << "Introduceti urmatoarele caracteristici: model(string), culoare(string), anul fabricatiei (int), daca este noua sau nu(1 / 0), pretul masinii(double) , numarul de persoane maxim(int), tip(hatchback, combi sau sedan)\n";
                    cin >> model >> culoare >> an_fabricatie >> nou >> pret >> nr_pers >> tipMonovolum;
                    Masina_Monovolum* masina_monovolum = new Masina_Monovolum(model, an_fabricatie, culoare, nou, nr_pers, tipMonovolum, pret);
                    stoc.insertCar(masina_monovolum);
                }
                throw - 1;
            }
            catch(...)
            {
                if(x == -1)
                    cout << "\n\n Ne pare rau, puteti doar tipurile de masini afisate\n\n";
            }

        }
        else if(operation == 2)
        {
            int number;
            cout << "\nA cata masina doriti sa o vindeti? \n";
            cin >> number;
            try
            {
                if(number > Vanzare<Masina>::GetNrMasiniStoc())
                    throw -1;
                stoc.sellCar(number);
            }
            catch(int x)
            {
                if(x == -1)
                    cout << "\nNu exista masina respectiva.\n";
            }

        }
        else if(operation == 3)
        {
            stoc.AfisareMasiniStoc();
        }
        else if(operation == 4)
        {
            stoc.AfisareMasiniVandute();
        }
        else if(operation == 5)
        {
            cout << "\n\n        O zi buna! Va mai asteptam!    \n\n     ";
            break;
        }
    }

    return 0;
}
