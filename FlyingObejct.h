#pragma once
#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "Velocity.h"

class FlyingObject : public Point, public Velocity
{
protected:
	Point point;
	Velocity velocity;
	bool alive;

public:
	FlyingObject();
	FlyingObject(Point point);
	Point getPoint() const { return point; }
	Velocity getVelocity() const { return velocity; }
	bool isAlive() { return alive; }
	void setPoint(Point point) { this->point = point; }
	void setVelocity(Velocity velcoity) { this->velocity = velocity; }
	void setAlive(bool alive) { this->alive = alive; }
	void kill() { this->alive = false; }
	void advance() {
		point.addX(velocity.getDx());
		point.addY(velocity.getDy());
	}
	virtual void draw();


};

#endif // !FlyingObject_H