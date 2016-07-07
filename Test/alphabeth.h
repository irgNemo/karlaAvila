/*
Autor: Karla Avila Cárdenas
Universidad de Guadalajara
*/
#include <vector>

#ifndef ALPHABETH_H_INCLUDED
#define ALPHABETH_H_INCLUDED

class Alphabeth{

	public:
		Alphabeth() = default;
		Alphabeth(std::vector<char> alpha){ alphabeth = alpha;};
		std::vector<char> getAlphabeth();
		char getSimbol(int position); 
		void setSimbol(char simbol) ;
		void setSimbol(std::vector<char> simbols) ;
		void remove(int position);
		void removeAll();
		int getSize();
		void display();
		bool searchSimbol(char);
		bool isEmpty();

	protected:
		std::vector<char> alphabeth;
};

#endif // ALPHABETH_H_INCLUDED
 
