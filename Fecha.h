//
// Created by ASUS on 2/6/2018.
//

#ifndef TAREALIB2_FECHA_H
#define TAREALIB2_FECHA_H


class Fecha {
public:
    int dia,mes,anio;
    Fecha(int,int,int);

    int getDia();
    void setDia(int dia);
    int getMes();
    void setMes(int mes);
    int getAnio();
    void setAnio(int anio);

    void imprimirFecha();
};


#endif //TAREA3_PROGRA3_FECHA_H
