/* razred Kvader
privatne lastnosti:  
      realne a,b,c,povrsina,volumen, d, d_ab, d_ac, d_bc
javne metode:
4.      Kvader();
3.      Kvader(float);
2.      Kvader(float,float);
1.      Kvader(float,float,float);
      void nastavi();
      void izpis();
-branje za velikosti stranic za štiri kvadre razreda 
Kvader, to je objekte kvader_1, kvader_2, kvader_3, kvader_4
-prvi objekt: vse vrednovti privzete, to je 2.0
-drugi objekt: preberemo a , ostali naj bosta privzeti 2.0
-tretji objekt: preberemo a in b, c ima privzeto vrednost 2.0
-ćetrti objekt: preberemo vrednosti vseh treh stranic

Za branjem podatkov kreirajte objekt in s pomočjo metode "nastavi"
nastavite vrednost za povrsina, volumen, d , d_ac in d_bc

Kličite izpis , ki naj urejeno izpise podatke za posamezne objekte 
*/
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

class Kvader
{
    float a,b,c,povrsina,volumen,d,d_ab,d_ac, d_bc;

public:
    Kvader() {a = 2.0; b = 2.0; c = 2.0; } // privzeti konstruktor
    Kvader(float x) {a = x; b = 2.0; c = 2.0; }
    Kvader(float x, float y) {a = x; b = y; c = 2.0; }
    Kvader(float x, float y, float z) {a = x; b = y; c = z; }
    void nastavi();
    void izpis();
};

void Kvader::nastavi()
{
    povrsina = 2 * (a*b + b*c + a*c);
    volumen = a*b*c;
    d = sqrt (a*a + b*b + c*c);
    d_ab = sqrt (a*a + b*b);
    d_ac = sqrt (a*a + c*c);
    d_bc = sqrt (b*b + c*c);
}

void Kvader::izpis()
{
    cout<< "Stranica a: " << a << endl;
    cout<< "Stranica b: " << b << endl;
    cout<< "Stranica c: " << c << endl;
    cout<< "Povrsina: " << povrsina << endl;
    cout<< "Volumen: " << volumen << endl;
    cout<< "d_ab: " << d_ab << endl;
    cout<< "d_ac: " << d_ac << endl;
    cout<< "d_bc: " << d_bc << endl;

}

int main()
{
    float a,b,c; 
 

    //kvader 1
    cout<<"Kvader 1 ima privzete stranice." << endl << endl;
    Kvader kvader_1;
    kvader_1.nastavi();


    //kvader 2
    cout<<"Vpisi stranico a za kvader_2: "; cin >> a;
    Kvader kvader_2(a);
    kvader_2.nastavi();

    //kvader 3
    cout<<"Vpisi stranico a za kvader_3: "; cin >> a;
    cout<<"Vpisi stranico b za kvader_3: "; cin >> b;
    Kvader kvader_3(a,b);
    kvader_3.nastavi();

    //kvader 4
    cout<<"Vpisi stranico a za kvader_4: "; cin >> a;
    cout<<"Vpisi stranico b za kvader_4: "; cin >> b;
    cout<<"Vpisi stranico c za kvader_4: "; cin >> c;
    Kvader kvader_4(a,b,c);
    kvader_4.nastavi();

    cout<<"\nIzpis lastnosti objekta kvader_1:"<<endl;
    kvader_1.izpis();
    cout<<"\n Izpis lastnosti objekta kvader_2:"<<endl;
    kvader_2.izpis();
    cout<<"\nIzpis lastnosti objekta kvader_3:"<<endl;
    kvader_3.izpis();
    cout<<"\nIzpis lastnosti objekta kvader_4:"<<endl;
    kvader_4.izpis();

system ("pause");
return 0;
}
