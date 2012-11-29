#ifndef __LOGO_Interpreter__forwardC__
#define __LOGO_Interpreter__forwardC__

#include <iostream>
#include "baseCommandC.h"

class rotateC : public baseCommandC{

private:
	int direction;

public:
	rotateC(float v, int d);
	rotateC();
	void draw();

};

#endif /* defined(__LOGO_Interpreter__forwardC__) */
