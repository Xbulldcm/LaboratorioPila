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

	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;
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
	cout << "Imprimiendo Pila despues del POP" << endl;
	cout << endl;
	cout << p << endl;

	Pila p2;

	for (int h = 0; h < 10; ++h) {

		ElementoInt *p22 = new ElementoInt(rand() % 1000);
		p2.push(p22);

	}

	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;
	cout << "Pila de Enteros" << endl;
	cout << endl;
	cout << p2 << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Haciendo PEEK" << endl;
	cout << endl;
	p2.peek();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Haciedno POP" << endl;
	cout << endl;
	p2.pop();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Imprimiendo Pila despues del POP" << endl;
	cout << endl;
	cout << p2 << endl;

	Pila p3;

	for (int g = 0; g < 10; ++g) {

		ElementoDouble *p33 = new ElementoDouble(rand() % 1000);
		p3.push(p33);

	}

	cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
	cout << endl;
	cout << "Pila de Doubles" << endl;
	cout << endl;
	cout << p3 << endl;
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Haciendo PEEK" << endl;
	cout << endl;
	p3.peek();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Haciedno POP" << endl;
	cout << endl;
	p3.pop();
	cout << "--------------------------------------------------------" << endl;
	cout << endl;
	cout << "Imprimiendo Pila despues del POP" << endl;
	cout << endl;
	cout << p3 << endl;


	system("pause");
	return 0;

}

