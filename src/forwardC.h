#ifndef __LOGO_Interpreter__forwardC__
#define __LOGO_Interpreter__forwardC__

#include <iostream>
#include "baseCommandC.h"

class forwardC : public baseCommandC{

public:
	forwardC(float v);
	forwardC();
	void draw();

};

#endif /* defined(__LOGO_Interpreter__forwardC__) */
