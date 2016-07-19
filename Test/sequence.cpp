/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <iostream>
#include "sequence.h"
#include "alphabethDNA.h"
#include "alphabethRNA.h"
#include "alphabethAMINO.h"

#define MAX_COMBINATORY 64
#define LIST_SIZE 2
#define ERROR_CORRESPONDENCIA "\nError de correspondencia."
#define SIMBOL_DNA 'T'
#define SIMBOL_RNA 'U'
/*initLista inicializa la lista- matriz de relacion entre grupos de 3 RNA con su aminoacido*/
/*void Sequence::initList(){
	int x = 0,y = 0,last;
	AlphabethRNA rna;
	Sequence tem;
	std::vector<std::vector<Sequence>> list(MAX_COMBINATORY, std::vector<Sequence>(LIST_SIZE));
	for(int i = 0; i < rna.getSize(); i++){
		tem.setSimbol(rna.getSimbol(i));
		for(int j = 0; j < rna.getSize(); j++){
			tem.setSimbol(rna.getSimbol(j));
			for(int k = 0; k < rna.getSize(); k++, x++){
				last = 2;
				tem.setSimbol(rna.getSimbol(k));
				list[x][y] = tem;
				tem.remove(last);
			}
			last = 1;
			tem.remove(last);
		}
		last = 0;
		tem.remove(last);
	}
}
*/
/*Elimina el simbolo de la posicion en el alfabeto*/
void Sequence::remove(int position){
	sequence.erase(sequence.begin()+position);
}

/*Asigna parametro de tipo alfabeto al seqAlphabeth (el alfabeto de la secuencia) */		
void Sequence::setAlphabeth(Alphabeth alpha){
	seqAlphabeth = alpha;
}

/*Agrega el parametro de tipo char al final de la secuencia*/		
void  Sequence::setSimbol(char simbol){
	sequence.push_back(simbol);
}

/*Asigna el parametro de tipo vector a la secuencia*/		
void  Sequence::setSequence(std::vector<char> seq){
	sequence = seq;
}

/*Asigna el parametro de tipo string a la secuencia*/		
void Sequence::setSequence(std::string cadena){
	std::copy(cadena.c_str(), cadena.c_str() + cadena.length(), back_inserter(sequence));
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
	AlphabethDNA dna;
	Sequence result;
	char simbol;
	if(seq.isAvailable(dna)){
		for(int i = 0; i < seq.getSize(); i++){
		simbol = seq.getSimbol(i);
			if(simbol == 'T')
				result.setSimbol('U');
			else
				result.setSimbol(simbol);
		}
	}else{
		std::cout << ERROR_CORRESPONDENCIA;
	}
	return result;
}

/*Obtiene el aminoacido correspondiente en base a una secuencia RNA de 3 elementos*/
Sequence Sequence::transcript(Sequence seq,int frameshift){
	AlphabethRNA rna;
	Sequence transcription;
	if(seq.isAvailable(rna)){
		initList();
		for(int i = frameshift; i < seq.getSize(); i= i +3){
			
		}
	}else
		std::cout << ERROR_CORRESPONDENCIA;
	return transcription;
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

/*Valida la correspondencia entre una secuencia y un alfabeto especificado por el parametro recibido*/
bool Sequence::isAvailable(Alphabeth alpha){
	bool flag = false;
	for(int i=0;i < getSize(); i++){
		flag = alpha.searchSimbol(sequence[i]);
		if(!flag)
			return false;
	}
	return true;
}

/*Obtiene el tamaño de la secuencia*/
int Sequence::getSize(){
	return sequence.size();
}


