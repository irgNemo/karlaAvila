#include <iostream>
#include <fstream>
#include <cstring>
#include "ArchivoFasta.h"

using namespace std;

ArchivoFasta::ArchivoFasta(){}

void ArchivoFasta::getNombre(string nombreArchivo){
    nombre = nombreArchivo + ".fasta";
}
void ArchivoFasta::getDescripcion(string descripcionArchivo){
    descripcion = descripcionArchivo;
}
void ArchivoFasta::getSecuencia(string secuenciaArchivo){
    secuencia = secuenciaArchivo;
}
string ArchivoFasta::setNombre(){
    return nombre;
}
string ArchivoFasta::setDescripcion(){
    return descripcion;
}
string ArchivoFasta::setSecuencia(){
    return secuencia;
}

void ArchivoFasta::leerArchivo(string nombreArchivo){
    char *nombreAuxiliar = const_cast<char*>(nombreArchivo.c_str());
    char *bitLector;
    cout <<"\nIntentando leer el archivo: " <<nombreAuxiliar << "\n\n";
    ifstream lectura(nombreAuxiliar);
    string descripcionAux = "",secuenciaAux = "";
    cout <<"\nIntentando leer el archivo:  antes del if";
    if(lectura.good()){
            cout <<"\nIntentando leer el archivo: entro al if " ;
        do{
            cout <<"\nIntentando leer el archivo: esta en el do" ;
            lectura.read((char * )bitLector,1);
            descripcionAux = descripcionAux + bitLector;
        }while(strcmp(bitLector,"\n") != 0);
        cout<<"\nDescripcion: \n"<<descripcionAux;
        getDescripcion(descripcionAux);

        cout<<"\nSecuencia: \n";
        do{
            lectura.read((char * )bitLector,1);
            cout<<bitLector;
            if(strcmp(bitLector,"\n") != 0){
            secuenciaAux = secuenciaAux + bitLector;
            }
        }while(!lectura.eof());
        getSecuencia(secuenciaAux);
    }
    else{
        cout<<"\nEL ARCHIVO : "<<nombreAuxiliar <<" NO EXISTE";
    }
    lectura.close();
}

