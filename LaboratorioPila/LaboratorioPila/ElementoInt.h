/*
 * ElementoInt.h
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#ifndef ELEMENTOINT_H_
#define ELEMENTOINT_H_

#include "Elemento.h"


using namespace std;

class ElementoInt : public Elemento {
private:
	int i;

public:

	int compareTo(Elemento *);
	void imprimir(ostream &) const;
	ElementoInt(int);
	virtual ~ElementoInt();
};

#endif /* ELEMENTOINT_H_ */
