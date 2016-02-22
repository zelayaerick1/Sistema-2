#include <iostream>
#include <stdio.h>
//Ingresar el nombre del empleado. turno y sus ventas usando un procedimiento
//el turno solo puede ser 1,2,3.
//Luego usar funicones para determinar el % de comision, ingresando el turno.
//Elaborar un procedimiento para calcular el % de comision, la comision ganada.

//Presentar los datos calculados.
using namespace std;

char nombre[45];

int turno;
double ventas,pcomis,comis;

void ingresoDatos(char nombre[],int turno,double &ventas)






    {
    cout<<"Nombre del Empleado...:";
    cin.getline(nombre,45);
    cout<<"Ventas...:";
    cin>>ventas;

    do
    {
        cout<<"Ingresar turno...:";
        cin>>turno;
    }while ((turno<1)or(turno>3));
    }
double Porcomis(int turno)
    {
        if (turno==1)
        {
            return 0.05;
        }
        else if (turno==2)
        {
            return 0.06;
        }
        else
        {
            return 0.04;
        }
    }
void calcular (int turno,double ventas, double &pcomis, double &comis)
    {
    pcomis=Porcomis(turno);
    comis= ventas*pcomis;
    }





int main()

    ingresoDatos(nombre,turno,ventas);
    calcular(turno,ventas,pcomis,comis);
    cout<<"Por. De comision...:"<<pcomis<<"\n";
    cout<<"Comision Ganada...:"<<comis<<"\n";


    return 0;
    }







