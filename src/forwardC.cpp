#include "forwardC.h"
#include <iostream>

forwardC::forwardC(float v):baseCommandC(v)
{

}

forwardC::forwardC():baseCommandC()
{

}


void forwardC::draw(){

	std::cout << value << std::endl;
}
