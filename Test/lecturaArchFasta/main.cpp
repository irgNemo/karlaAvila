#include <iostream>
#include "ArchivoFasta.h"
using namespace std;

int main()
{
    ArchivoFasta miArchivo;
    string nom;

    cout<<"\nIngrese el nombre del archivo \n(No es necesario escribir la extencion): ";
    cin>>nom;
    miArchivo.getNombre(nom);
    miArchivo.leerArchivo(miArchivo.setNombre());

}
