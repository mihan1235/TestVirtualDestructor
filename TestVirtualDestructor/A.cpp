#include <iostream>
using std::cout;
using std::endl;

#include "A.h"

A::A(int a) {
	cout << "A()" << endl;
	A_counter++;
}

A::~A() {
	cout << "~A()" << endl;
	A_counter--;
}


void print_A_count() {

	printf("Number of A: %i\n", A_counter);
}