//
// Created by ASUS on 2/6/2018.
//

#include "Cuenta.h"
#include <iostream>
using namespace std;


Cuenta::Cuenta(int monto) {
    if(monto>=0){
        saldo=monto;
    }else{
        cout<<"Monto Inicial Invalido"<<endl<<"Saldo cuenta: 0"<<endl;
        saldo=0;
    }
}
void Cuenta::Abonar(int monto) {
    saldo+=monto;
    cout<<"Se abono "<<monto<<" a su cuenta."<<endl;
}
void Cuenta::Cargar(int monto) {
    if(monto>Obtener()){
        cout<<"No tiene sufiente saldo en la cuenta"<<endl;
    }else{
        saldo=saldo-monto;
        cout<<"Se retiro "<<monto<<" de su cuenta."<<endl;
    }
}
int Cuenta::Obtener() {
    return saldo;
}