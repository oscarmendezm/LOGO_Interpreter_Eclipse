
/*
 *  baseCommandC.h
 *  LOGO Interpreter
 *
 *  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
 *  Copyright 2012 guapOscar Enterprises. All rights reserved.
 *
 */

#include <iostream>

class baseCommandC{

private:
	float value;

public:

	baseCommandC(float v);
	baseCommandC();

	~baseCommandC();

	friend std::istream& operator>> (std::istream& in, baseCommandC& a);
};

