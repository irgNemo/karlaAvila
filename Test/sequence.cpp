/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <iostream>
#include "sequence.h"
#include "alphabethDNA.h"
#include "alphabethRNA.h"
#include "alphabethAMINO.h"

/*Asigna parametro de tipo alfabeto al seqAlphabeth (el alfabeto de la secuencia) */		
void Sequence::setAlphabeth(Alphabeth alpha){
	seqAlphabeth = alpha;
}

/*Agrega el parametro de tipo char al final de la secuencia*/		
void  Sequence::setSequence(char simbol){
	sequence.push_back(simbol);
}

/*Asigna el parametro de tipo vector a la secuencia*/		
void  Sequence::setSequence(std::vector<char> seq){
	sequence = seq;
}

/*Obtiene el vector, secuencia.*/
std::vector<char> Sequence::getSequence(){
	return sequence;
}

/*Obtiene el caracter de una posicion especifica del vector secuencia*/
char Sequence::getSimbol(int position){
	return sequence[position];
}

/*Obtiene el alfabeto que compone la secuencia*/
Alphabeth Sequence::getAlphabeth(){
	return seqAlphabeth;
}

/*Obtiene la secuencia resultante de traducir DNA a RNA*/
Sequence Sequence::translate(Sequence seq){

}

/*Obtiene la secuencia resultante de trsncribir RNA a AMINOACIDOS*/
Sequence Sequence::transcript(Sequence seq){

}

/*Gerera una secuencia en base a su frameshift, este se especifica con la posicion : 1,2,3.
Dependiendo de donde se quiere que se lea la secuencia*/
Sequence Sequence::frameShift(Sequence seq,int position){

}

/*Busca la correspondencia entre la secuecia y alguno de los alfabetos default (DNA,RNA,AMINO)
y retorna el alfabeto correspondiente.*/
Alphabeth Sequence::searchDefaultAlphabeth(){
	std::cout<<"\nBuscando alfabeto";
	bool flagDNA = true, flagRNA = true, flagAMINO = true;
	AlphabethDNA dna;
	AlphabethRNA rna;
	AlphabethAMINO amino;
	Alphabeth nulo;
	
	for(int i=0;i < getSize(); i++){
		flagDNA = dna.searchSimbol(sequence[i]);
		if(!flagDNA)
			break;
	}	
	if(flagDNA)
		return dna;
	
	for(int i=0;i < getSize(); i++){
		flagRNA = rna.searchSimbol(sequence[i]);
		if(!flagRNA)
			break;
	}
	if(flagRNA)
		return rna;
	
	for(int i=0;i < getSize(); i++){
		flagAMINO = amino.searchSimbol(sequence[i]);
		if(!flagAMINO)
			break;
	}
	
	if(flagAMINO)
		return amino;
	/*else
		//Aqui se mandaría buscar el alfabeto en base a la secuencia.*/
}

/*Muestra la secuencia en pantalla*/
void Sequence::display(){
	for(int i=0;i < getSize(); i++){
		std::cout << sequence[i]<< "\t" ;
	}
	std::cout << "\n";
}

/*Valida la correspondencia entre una secuencia y su alfabeto*/
bool Sequence::isAvailable(){
	bool flag = false;
	for(int i=0;i < getSize(); i++){
		flag = seqAlphabeth.searchSimbol(sequence[i]);
		if(!flag)
			return false;
	}
	return true;
}

/*Obtiene el tamaño de la secuencia*/
int Sequence::getSize(){
	return sequence.size();
}


