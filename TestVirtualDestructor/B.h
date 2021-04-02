#pragma once

#include "A.h"

static int B_counter = 0;



class B : public A {
public:
	B();
	~B();
};

void print_B_count();