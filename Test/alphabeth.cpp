/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <iostream>
#include "alphabeth.h"

/*Obtiene el vector de caracteres del alfaveto*/
std::vector<char>Alphabeth::getAlphabeth(){
	return alphabeth;
}

/*Obtiene el simbolo de ls posicion especificada en el alfabeto*/
char Alphabeth::getSimbol(int position){
	return alphabeth[position];
}

/*Asigna un simbolo al final del alfabeto*/
void Alphabeth::setSimbol(char simbol){
	alphabeth.push_back(simbol);
}

/*Asigna un conjunto de simbolos (vector) al alfabeto*/
void Alphabeth::setSimbol(std::vector<char> simbols) {
	alphabeth = simbols;
}

/*Elimina el simbolo de la posicion en el alfabeto*/
void Alphabeth::remove(int position){
	alphabeth.erase(alphabeth.begin()+position);
}

/*Elimina todo el contenido del alfabeto, dejandolo vacio*/
void Alphabeth::removeAll(){
	alphabeth.clear();
}		

/*Muestra el contnido del alfabeto*/
void Alphabeth::display(){
	for(int i=0; i<getSize(); i++){
		std::cout << getSimbol(i) << std::endl;
	}
}

/*Verifica si el alfabeto esta vacio*/
bool Alphabeth::isEmpty(){
	bool flag = false;
	if(getSize() == 0)
		flag = true;
	return flag;		
}

/*Busca un simbolo determinado en el alfabeto*/
bool Alphabeth::searchSimbol(char s){
	for(int i=0; i < getSize(); i++){
		char s2 = getSimbol(i);
		if(s2 == s)
			return true;
	}
	return false;
}

/*Obtiene el tamaño del alfabeto*/
int Alphabeth::getSize(){
    return alphabeth.size();
}
