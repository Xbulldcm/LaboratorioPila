#pragma once

#include "Elemento.h"
using namespace std;
class Pila
{

	friend ostream & operator<<(ostream &, Pila &);

protected:

	Elemento * ultimo;

public:

	void push(Elemento *);
	void pop();
	void peek();
	Pila();
	~Pila();

private:

	void imprimir(Elemento *, ostream &);
};

