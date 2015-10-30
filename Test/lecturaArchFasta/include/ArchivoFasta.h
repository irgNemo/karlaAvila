#ifndef ARCHIVOFASTA_H
#define ARCHIVOFASTA_H
#include <string>
using namespace std;

class ArchivoFasta
{
    public:
        ArchivoFasta();
        void leerArchivo(string nombreArchivo);
        void getNombre(string nombreArchivo);
        void getDescripcion(string descripcionArchivo);
        void getSecuencia(string secuenciaArchivo);
        string setNombre();
        string setDescripcion();
        string setSecuencia();
    private:
        string nombre;
        string descripcion;
        string secuencia;
};

#endif // ARCHIVOFASTA_H
