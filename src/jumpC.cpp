#include "jumpC.h"
#include <iostream>

jumpC::jumpC(float v):baseCommandC(v)
{

}

jumpC::jumpC():baseCommandC()
{

}


void jumpC::draw(){

	std::cout << value << std::endl;
}
