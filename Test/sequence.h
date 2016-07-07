/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
//#include <vector>
#include "alphabeth.h"

#ifndef SEQUENCE_H_INCLUDED
#define SEQUENCE_H_INCLUDED

class Sequence{

	public:
		Sequence()= default;
		Sequence(Alphabeth alpha, std::vector<char> seq){sequence = seq; seqAlphabeth = alpha;};
		void setAlphabeth(Alphabeth alpha);
		void setSequence(std::vector<char> seq);
		void setSequence(char simbol);
		char getSimbol(int position);
		void display();
		bool isAvailable();
		int getSize();
		std::vector<char> getSequence();
		Alphabeth getAlphabeth();
		Sequence translate(Sequence seq);
		Sequence transcript(Sequence seq);
		Sequence frameShift(Sequence seq,int position);
		Alphabeth searchDefaultAlphabeth();

	protected:
		Alphabeth seqAlphabeth;
		std::vector<char> sequence;
};

#endif // SEQUENCE_H_INCLUDED
 
