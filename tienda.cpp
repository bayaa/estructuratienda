///BY BRAYAN GUADALUPE HERNANDEZ 22/08/2018
///ESTRUCTURA ENTRO DE OTRA ESTRUCTURA

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct tienda
{
    char producto [20];
    int precio;
    char marca[20];
}
;
struct xtras
{

    int departamento;
    int fecha_expiracion;
    char lugar_procedencia [20];
    struct tienda dir_extras;

} p1 [10];

int main ()
{
    char cantidad;
    char*locale;
    locale=setlocale(LC_ALL,"");
    cout<<"\tBIENVENIDO A TIENDA TODO DE INTERNET DONDE PUEDES COMPRAR LO QUE QUIERAS\n"<<"   _____________________________________________________________________\n\n";

    int contador=0,j=0;
    char respuesta;


    do{
        cout<<"\t NOMBRE DEL PRODUCTO   "<<j+1<<endl;
        cin.getline(p1[j].dir_extras.producto,20, '\n');
         cin.getline(p1[j].dir_extras.producto,20, '\n');
        cout<<"\tPRECIO\n";
        cin>>p1[j].dir_extras.precio;
        contador=contador+p1[j].dir_extras.precio;
        cout<<"\tMARCA\n";
        cin.getline(p1[j].dir_extras.marca,20, '\n');
        cin.getline(p1[j].dir_extras.marca,20, '\n');


        cout<<"\tCODIGO POSTAL (NUMERO)\n";
        cin>>p1[j].departamento;


        cout<<"\tAÑO DE EXPIRACION\n";
        cin>>p1[j].fecha_expiracion;

        cout<<"\tLUGAR DE PROCEDENCIA\n";
        cin.getline(p1[j].lugar_procedencia,20, '\n');
        cin.getline(p1[j].lugar_procedencia,20, '\n');
        if (j==2)
        {
            for (int i =0; i<j; i++)
            {

                cout<<"\tPRODUCTO   "<<i+1<<"..................";
                cout<<p1[i].dir_extras.producto<<endl;
                cout<<"\tPRECIO..................";
                cout<<p1[i].dir_extras.precio<<endl;

                cout<<"\tMARCA..................";
                cout<<p1[i].dir_extras.marca<<endl;



                cout<<"\tDEPARTAMENTO (NUMERO)..................";
                cout<<p1[i].departamento<<endl;


                cout<<"\tAÑO DE EXPIRACION..................";
                cout<<p1[i].fecha_expiracion<<endl;

                cout<<"\tLUGAR DE PROCEDENCIA.............";
                cout<<p1[i].lugar_procedencia<<endl;


            }
            cout<<"\n\t El limte maximo de compra son 10 productos\n\tTotal a pagar  >>>>>>>>>>>>>>>$"<<contador;
            return 0;

        }
        cout<<"Final de todos los productos    si (y) no (n)";

        cin>>respuesta;
        j++;
    }
    while ( respuesta != 'y');

    for (int i =0; i<j; i++)
    {

        cout<<"\tPRODUCTO   "<<i+1<<"..................";
        cout<<p1[i].dir_extras.producto<<endl;
        cout<<"\tPRECIO..................";
        cout<<p1[i].dir_extras.precio<<endl;

        cout<<"\tMARCA..................";
        cout<<p1[i].dir_extras.marca<<endl;



        cout<<"\tDEPARTAMENTO (NUMERO)..................";
        cout<<p1[i].departamento<<endl;


        cout<<"\tAÑO DE EXPIRACION..................";
        cout<<p1[i].fecha_expiracion<<endl;

        cout<<"\tLUGAR DE PROCEDENCIA .................";
        cout<<p1[i].lugar_procedencia<<endl;

    }
    cout<<"\n\t Total a pagar  >>>>>>>>>$"<<contador;

    return 0;
}
