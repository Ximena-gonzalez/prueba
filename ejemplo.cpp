#include <stdlib.h>
#include <iostream>
using namespace std;

class Empleado
{
    protected:
    int salario;
};

class Programador: public Empleado //si ponemos public podemos aceder tambien a protected
{
    public:
    int bono;
    void setSalario(int s) //meodo; tipo constructor, captura salario
    {
        salario=s;
    }
    int getSalario() //muestra salario
    {
        return salario;
    }
};

int main()
{
    int s, b;
    cout << "introduce el salario: " << endl;
    cin >> s;
    cout << "introduce el bono: " << endl;
    cin >> b;

    Programador objprogramador;
    // llamamos setSalario para darle un valor
    objprogramador.setSalario(s);
    objprogramador.bono= b;

    cout<< "Salario: " << objprogramador.getSalario() << endl;
    cout<< "bono: " << objprogramador.bono << endl;

    return 0;
}