#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

class Velas
{
    private:
    string color;
    public:
    Velas(string _color)
    {
        color= _color;
    }
    virtual float calculo();
};

class Normales: public Velas
{
    private:
    int altura;
    public:
    Normales(string _color, int _altura): Velas(_color)
    {
        altura= _altura;
    }
    float calculo();
};

float Normales:: calculo()
{
    Velas::calculo();
    float precio=(altura/8)*50;
    cout << "el precio de la vela es:" << precio << endl;
}

class Aromaticas: public Velas
{
    private:
    int altura;
    public:
    Aromaticas(string _color, int _altura): Velas(_color)
    {
        altura= _altura;
    }
    float calculo();
};

float Aromaticas:: calculo()
{
    Velas::calculo();
    float precio= (altura/10)* 80;
    cout << "el precio de la vela aromatica es: " << precio << endl;
}

int main()
{
    Normales vela_n("gris", 64);
    vela_n.calculo();
    Aromaticas vela_a("cafe", 40);
    vela_a.calculo();
}

