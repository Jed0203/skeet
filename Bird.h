#pragma once
#ifndef BIRD_H
#define BIRD_H
#include "FlyingObejct.h"

class Bird: public FlyingObject
{
private:
	int hp;

public:
	Bird(){}
	Bird(Point point) { this->point = point; }
	virtual void draw();
	virtual int hit() = 0;
	

};

#endif // !BIRD_H