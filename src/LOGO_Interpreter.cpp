//============================================================================
// Name        : LOGO_Interpreter.cpp
// Author      : Oscar Alejandro Mendez Maldonado
// Version     :
// Copyright   : This is property of guapOscar Industries
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "baseCommandC.h"
#include "forwardC.h"
#include <iostream>

int main (int argc, char * const argv[]) {
    // insert code here...
	forwardC test(5.0);
	forwardC testDefault;
	test.draw();

    return 0;
}


