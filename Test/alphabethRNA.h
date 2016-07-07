/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/

#include "alphabeth.h"

#ifndef ALPHABETHRNA_H_INCLUDED
#define ALPHABETHRNA_H_INCLUDED

class AlphabethRNA : public Alphabeth{

	public:
		AlphabethRNA(){ 
			char symbols[] = {'C','G','U','A'};
			std::vector<char> inicialVector (symbols, symbols + sizeof(symbols)/sizeof(char));
			setSimbol(inicialVector);
		};
};

#endif // ALPHABETHRNA_H_INCLUDED
 
