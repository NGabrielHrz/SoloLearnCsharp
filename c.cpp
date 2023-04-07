#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;


class Cliente
{
    private:
        int Monto;
        string Nombre;

    public:
        Cliente(int _Monto,string _Nombre){Monto=_Monto;Nombre=_Nombre;}     

        void Deposito(int cantidad)
        {
            Monto=Monto+cantidad;
        }       

        void Retiro(int cantidad)
        {
            Monto=Monto-cantidad;
        }  

        int Saldo()
        {
            return Monto;
        }                  
};

class Banco : Cliente
{
    public:
        Banco();     

        //Desde aquí quiero acceder a los métodos de la CLASE Cliente ¿Cómo?    
};

int main()
{
    Cliente P1(100,"Carlos");
    Cliente P2(100,"Carlos");
    Cliente P3(100,"Carlos");


    system("pause");
}