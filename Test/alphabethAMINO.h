/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/

#include "alphabeth.h"

#ifndef ALPHABETHAMINO_H_INCLUDED
#define ALPHABETHAMINO_H_INCLUDED

class AlphabethAMINO : public Alphabeth{

	public:
		AlphabethAMINO(){ 
			char symbols[] = {'A','R','N','D','C','Q','E','G','H','I','L','K','M','F','P','S','T','W','Y','V'};
			std::vector<char> inicialVector (symbols, symbols + sizeof(symbols)/sizeof(char));
			setSimbol(inicialVector);
		};
};

#endif // ALPHABETHAMINO_H_INCLUDED
 
