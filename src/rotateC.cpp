#include "rotateC.h"
#include <iostream>

rotateC::rotateC(float v, int d):baseCommandC(v),direction(d)
{

}

rotateC::rotateC():baseCommandC()
{

}


void rotateC::draw(){

	std::cout << value << std::endl;
}
