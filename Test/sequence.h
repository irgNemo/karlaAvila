/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <cstring>
#include <algorithm> 
#include "alphabeth.h"

#ifndef SEQUENCE_H_INCLUDED
#define SEQUENCE_H_INCLUDED

class Sequence{

	public:
		Sequence()= default;
		Sequence(Alphabeth alpha, std::vector<char> seq){sequence = seq; seqAlphabeth = alpha;};
		Sequence(Alphabeth alpha, std::string cadena){std::copy(cadena.c_str(), cadena.c_str() + cadena.length(), back_inserter(sequence)); seqAlphabeth = alpha;};
		//void initList();
		void remove(int position);
		void setAlphabeth(Alphabeth alpha);
		void setSequence(std::vector<char> seq);
		void setSequence(std::string cadena);
		void setSimbol(char simbol);
		char getSimbol(int position);
		void display();
		bool isAvailable();
		bool isAvailable(Alphabeth alpha);
		int getSize();
		std::vector<char> getSequence();
		Alphabeth getAlphabeth();
		Sequence translate(Sequence seq);
		Sequence transcript(Sequence seq, int frameshift);
		Alphabeth searchDefaultAlphabeth();

	protected:
		Alphabeth seqAlphabeth;
		std::vector<char> sequence;
};

#endif // SEQUENCE_H_INCLUDED
 
