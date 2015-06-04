/*
 * Main.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#include "stdafx.h"
#include "Elemento.h"
#include "Persona.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "ElementoPersonaEdad.h"


#include "Pila.h"



using namespace std;

int main(int argc, char **argv) {

	srand(time(NULL));
	string s[30] = { "Diego", "Maria", "Juan", "Andres", "Pedro", "Luis",
		"Juana", "Siria", "Roberto", "Siria", "Sebastian", "Ricardo",
		"Aria", "Andrey", "Chris", "Jose", "Ana", "Tyler", "Alberto",
		"Carolina", "Catalina", "Leonardo", "Walter", "Helen", "Silvia",
		"Monse", "Camila", "Carlos", "Aracely", "Mario" };

	Pila p;
	
	for (int w = 0; w < 10; ++w) {

		Persona* p1 = new Persona(rand() % 1000, s[rand() % 30], rand() % 100);
		ElementoPersona *p11 = new ElementoPersona(p1);
		p.push(p11);

	}

	cout << "Pila de personas" << endl;
	cout << endl;
	cout << p << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Haciendo PEEK" << endl;
	cout << endl;
	p.peek();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Haciedno POP" << endl;
	cout << endl;
	p.pop();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Imprimiendo Pila denuevo" << endl;
	cout << endl;
	cout << p << endl;
	
	system("pause");
	return 0;

}

