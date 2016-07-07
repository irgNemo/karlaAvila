/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <iostream>
#include "alphabeth.cpp"
#include "alphabethDNA.h"
#include "alphabethRNA.h"
#include "alphabethAMINO.h"

int main(){
//PRUEBA DEL ALPHABETH
	//Se crea el objeto alfabeto hijo (DNA) y se muestra su contenido
	AlphabethDNA dna;
	std::cout << "***DNA***\n";
	dna.display();
	std::cout << "__________________________________________"<< std::endl;
    
    //Se crea el objeto alfabeto hijo (RNA) y se muestra su contenido
	AlphabethRNA rna;
	std::cout << "***RNA***\n";
	rna.display();
	std::cout << "__________________________________________"<< std::endl;
    
    //Se crea el objeto alfabeto hijo (aminoacidos) y se muestra su contenido
	AlphabethAMINO aminoacid;
	std::cout << "***AMINO ACIDS***\n";
	aminoacid.display();
	std::cout << "__________________________________________"<< std::endl;
    
    	
	//Se crea un vector que se asigará al alfabeto
    std::vector<char> ve;
    ve.push_back('a');
    ve.push_back('b');
    ve.push_back('c');
    std::cout << "\nSimbolo en la posicion 2 en el vector\t" << ve[2] << std::endl;
    
    //Se construye el alfabeto con el vector creado
    std::cout << "\nAsignando vector al alfabeto"<< std::endl;
    Alphabeth al(ve);
    
    //Se agrega el simbolo d al final del alfabeto
    al.setSimbol('d');
    std::cout<<"Se agrego un nuevo simbolo al alfabeto"<< std::endl;
    
    //Muestra el simbolo en la posicion 1 del alfabeto
    char mySimbol = al.getSimbol(1);
    std::cout << "\n Simbolo en la posicion 1 al alfabeto: \t" << mySimbol << "\n";
    
    //Se asigna a un nuevo vector el contenido del alfabeto y muestra el contenido del vector
    std::vector<char> alphaTem = al.getAlphabeth();
    std::cout << "\nVector  contiene: \n";
    for(int i = 0; i < alphaTem.size(); i++){
    	std::cout << alphaTem[i] << std::endl;
    }
    
    //Agregamos un simbolo al vector y se asigna el contenido de este al alfabeto
    alphaTem.push_back('k');
    al.setSimbol(alphaTem);
    
    //Se muestra el contenido del alfabeto
    std::cout << "\n__________________________________________"<< std::endl;
    al.display();
    
    //Buscar un simbolo en un alfabeto
    char searched;
    std::cout << "\nIngrese el simbolo a buscar: ";
    std::cin >> searched;
    bool isIncluded = al.searchSimbol(searched);
    if ( isIncluded )
    	std::cout << "\nEl simbolo  '" << searched << "' fue encontrado\n";
    else
    	std::cout << "\nEl simbolo  '" << searched << "' NO fue encontrado\n";
    
    //Eliminando elementos del alfabeto
    int posicion = 1;
    al.remove(posicion);
    std::cout << "\nSe elimino el simbolo en la posicion: " << posicion <<"\nEl alfabeto contiene: \n";
    al.display();
    al.removeAll();
    if(al.isEmpty())
    	std::cout << "\nEl Alfabeto esta vacio.\n";
    else
    	std::cout << "\nError al eliminar.\n";
        
}













