//
// Created by ASUS on 2/6/2018.
//

#ifndef TAREALIBRO2_CUENTA_H
#define TAREALIBRO2_CUENTA_H

class Cuenta {
public:
    int saldo;
    Cuenta(int);
    void Abonar(int);
    void Cargar(int);
    int Obtener();
};

#endif //TAREALIBRO2_CUENTA_H
