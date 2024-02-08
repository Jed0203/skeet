#pragma once
#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include "Bird.h"
#include "uiDraw.h"
class ToughBird : public Bird
{
private:
	int numHits;

public:
	ToughBird(Point point) { this->point = point;
	numHits = 3;
	velocity.setDx(random(2, 5));

	if (point.getY() <= 0)
	{
		velocity.setDy(random(1, 4));
	}

	else
	{
		velocity.setDy(random(-3, 4));
	}
	
	}
	
	void draw() { drawToughBird(getPoint(), 15, numHits); }
	
	int hit() {
		switch (numHits)
		{
		case 3:
			numHits = 2;
			return 1;
			break;
		case 2:
			numHits = 1;
			return 1;
			break;
		case 1:
			numHits = 0;
			kill();
			return 3;
			break;


		}
	}
};
#endif
