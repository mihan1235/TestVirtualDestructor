
#include <iostream>
using std::cout;
using std::endl;

#include "B.h"

B::B() : A(0) {
	cout << "B()" << endl;
	B_counter++;
}

B::~B() {
	cout << "~B()" << endl;
	B_counter--;
}

void print_B_count() {

	printf("Number of B: %i\n", B_counter);
}
