#pragma once
#ifndef STANDARDBIRD_H
#define STANDARDBIRD_H

#include "Bird.h"
#include "point.h"
#include "uiDraw.h"

class StandardBird: public Bird
{

public:
	StandardBird(Point point) { this->point = point;
	velocity.setDx(random(3, 7));
	if (point.getY() <= 0)
	{
		velocity.setDy(random(1, 5));
	}

	else
	{
		velocity.setDy(random(-5, -1));
	}
	
	}
	
	void draw() { drawCircle(getPoint(),15); }
	
	int hit() { 
		kill();
		return 1;
	}
};

#endif // !STANDARDBIRD