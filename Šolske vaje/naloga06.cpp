/* naloga06.cpp
Uporabi razred Kompleksno, ki bo vseboval
privatne podatke (lastnosti):
    realne: r, i
javne metode:
    Kompleksno ();
    Kompleksno (float);
    Kompleksno (float, float);
    void dodaj (float, float);
    void izpis ();
Omogočite branje velikosti komponent za tri kompleksna števila, to je objekte
"k_a", "k_b" in "k_c". Prvi objekt naj ima obe vrednosti privzeti, to je 1.0, za drugega preberemo "r",
"i" naj bo prevzeta, to je 1.0, za tretjega preberemo obe vrednosti, to je "r" in "i".
Takoj za branjem podatkov za posamezni objekt kreirajte pripadajoči objekt, 
Preberite kompleksno število.
Z metodo "dodaj" dodajte vsakemu objektu prebrano število, katerega komponenti sta podani
kot argumenta, prvo naj bo realno, drugo pa imaginarna komponenta. Z "izpis" urejeno izpišite
lastnosti za vsak objekt pred in po prištevanju*/

#include <iostream.h>

using namespace std;

class Kompleksno
{
    float r, i;
  public:
    Kompleksno();
    Kompleksno(float);
    Kompleksno(float, float);
    void Dodaj(float, float);
    void Izpis();
};

Kompleksno::Kompleksno(){ r = 1.0; i = 1.0; };
Kompleksno::Kompleksno(float a){ r = a; i = 1.0; };
Kompleksno::Kompleksno(float a, float b){ r = a; i = b; };

void Kompleksno::Dodaj(float a, float b)
{
  r += a; 
  i += b;
}
void Kompleksno::Izpis()
{
  cout << "Kompleksno število: K = " <<r <<" + " <<i <<"i\n";
}

int main()
{
  float a, b;
  
  Kompleksno k_a;
  
  cout <<"Vnesite realni del drugega kompleksnega števila:\nr = "; 
  cin >> a;
  Kompleksno k_b(a);
  
  cout <<"Vnesite realni in imaginarni del drugega kompleksnega števila:\nr = ";
  cin >> a;
  cout <<"i = "; 
  cin >>b;
  Kompleksno k_c(a, b);
  
  Kompleksno  *kaz_k;
  
  kaz_k = &k_a;  
  kaz_k -> Izpis();
  kaz_k -> Dodaj(2,3);
  kaz_k -> Izpis();
  cout <<endl;
  
  kaz_k = &k_b;
  kaz_k -> Izpis();
  kaz_k -> Dodaj(2,3);
  kaz_k -> Izpis();
  cout <<endl;
  
  kaz_k = &k_c;
  kaz_k -> Izpis();
  kaz_k -> Dodaj(2,3);
  kaz_k -> Izpis();
  
  return 0;
}
