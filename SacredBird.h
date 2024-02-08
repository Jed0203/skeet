#pragma once
#ifndef SACREDBIRD_H
#define SACREDBIRD_H
#include "Bird.h"
#include "uiDraw.h"

class SacredBird : public Bird
{
public:
	SacredBird() {
		velocity.setDx(random(3, 7));
		if (point.getY() <= 0)
		{
			velocity.setDy(random(1, 5));
		}
		else
		{
			velocity.setDy(random(-4, 5));
		}
	}
	SacredBird(Point point) { this->point = point;
	velocity.setDx(random(3, 7));
	if (point.getY() <= 0)
	{
		velocity.setDy(random(1, 5));
	}
	else
	{
		velocity.setDy(random(-4, 5));
	}
	
	}
	
	void draw() { drawSacredBird(getPoint(), 15); }
	
	
	int hit() {
		kill();
		return -10;

	}
};
#endif;
