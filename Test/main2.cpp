/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <iostream>
#include "sequence.cpp"
#include "alphabeth.cpp"

int main(){

//PRUEBA CON ALPHABETH HIJO
	AlphabethRNA rna;
	std::vector<char> vecSeq;
	vecSeq.push_back('C');
	vecSeq.push_back('A');
	vecSeq.push_back('A');
	vecSeq.push_back('T');//Al cambiar este simbolo de la secuencia No corresponde al alfabeto
	vecSeq.push_back('G');
	vecSeq.push_back('A');
	
	//Se crea una secuencia
	Sequence seq1(rna,vecSeq);
	int tam = seq1.getSize();
	if (seq1.isAvailable()){
		seq1.display();
		std::cout << "\nTamanio inicial: " << tam;
		seq1.setSequence('U');
		std::cout << "\nTamanio final: " << seq1.getSize();
	}
	else{
		std::cout << "\nNo concuerda ";
		Alphabeth defaultAl = seq1.searchDefaultAlphabeth();
		std::cout << "\nEl alfabeto asignado fue:  ";
		defaultAl.display();
	}

std::cout<< "\n--------------------------------------------------------------------\n";

//PRUEBA CON UN NUEVO ALPHABETH
	Alphabeth myAlpha;
	myAlpha.setSimbol('C');
	myAlpha.setSimbol('A');//Este simbolo puede cambiarse para que la secuencia NO concuerde con el alfabeto
	myAlpha.setSimbol('G');
	std::cout << "\nAlfabeto contiene: \n";
	myAlpha.display();
	//Se crea un vector que contiene una secuencia y se le asigna a Sequence.
	std::vector<char> vecSeq2;
	vecSeq.push_back('C');
	vecSeq.push_back('A');
	vecSeq.push_back('A');
	vecSeq.push_back('C');
	vecSeq.push_back('G');
	vecSeq.push_back('A');
	
	Sequence mySeq2(myAlpha,vecSeq2);
	std::cout << "\nValidando que la secuencia corresponda con el tipo de alfabeto \n";
	if (mySeq2.isAvailable()){
			std::cout << "\nMySeq2 concuerda \n";
			mySeq2.display();
	}
	else
			std::cout << "\nNo concuerda\n";
}


