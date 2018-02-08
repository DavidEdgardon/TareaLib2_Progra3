#include <iostream>
#include "Cuenta.h"
#include "Factura.h"
#include "Fecha.h"
using namespace std;

int main() {
    int opc;
    do{
    cout<<"1. Ejercicio 3.12"<<endl;
    cout<<"2. Ejercicio 3.13"<<endl;
    cout<<"3. Ejercicio 3.15"<<endl;
    cout<<"Ingrese la opcion:";
    cin >> opc;

 switch (opc) {
     case 1: {
         Cuenta miembro1(150000);
         Cuenta miembro2(300000);

         cout << "Cuenta 1: " << miembro1.Obtener() << endl;
         cout << "Cuenta 2: " << miembro2.Obtener() << endl;

         miembro1.Abonar(15000);
         miembro2.Abonar(10000);

         miembro1.Cargar(6000);
         miembro2.Cargar(5500);

         cout << "Cuenta 1: " << miembro1.Obtener() << endl;
         cout << "Cuenta 2: " << miembro2.Obtener() << endl;
         break;
     }
     case 2: {
         Factura fac("Llave Mixta", "Herramienta", 5, 250);
         fac.imprimirFactura();
         break;
     }

     case 3: {
         Fecha fec(30, 12, 2018);
         fec.imprimirFecha();
         break;
     }
     }
    }while(opc!=-1);
}
