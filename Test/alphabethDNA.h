/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/

#include "alphabeth.h"

#ifndef ALPHABETHDNA_H_INCLUDED
#define ALPHABETHDNA_H_INCLUDED

class AlphabethDNA : public Alphabeth{

	public:
		AlphabethDNA(){ 
			char symbols[] = {'C','G','T','A'};
			std::vector<char> inicialVector (symbols, symbols + sizeof(symbols)/sizeof(char));
			setSimbol(inicialVector);
		};
};

#endif // ALPHABETHDNA_H_INCLUDED
 
