#ifndef __LOGO_Interpreter__forwardC__
#define __LOGO_Interpreter__forwardC__

#include <iostream>
#include "baseCommandC.h"

class jumpC : public baseCommandC{

public:
	jumpC(float v);
	jumpC();
	void draw();

};

#endif /* defined(__LOGO_Interpreter__forwardC__) */
