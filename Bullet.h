#ifndef BULLET_H
#define BULLET_H
#include "FlyingObejct.h"
#include "uiDraw.h"
#include "rifle.h"
#include "point.h"
#include "Velocity.h"
#include <iostream>
#include <cmath>

using namespace std;
#define BULLET_SPEED 10.0;
#define M_PI 3.141592653589793

#pragma once
class Bullet: public FlyingObject
{

public:
	Bullet() : FlyingObject() {

	}

	void draw() { drawLander(getPoint()); }
	void fire(Point point, float angle) { 
		this->point = point;
		float dx = (-cos(angle * M_PI/180.0)) * BULLET_SPEED;
		float dy = (sin(angle  * M_PI/180.0))  * BULLET_SPEED;
		velocity.setDx(dx);
		velocity.setDy(dy);
	}
};
#endif // !BULLET_H