#include "FlyingObejct.h"
#include "point.h"
#include "velocity.h"

FlyingObject::FlyingObject()
{
    alive = true;
    velocity.setDx(0);
    velocity.setDy(0);
    point.setX(0);
    point.setY(0);
}

FlyingObject::FlyingObject(Point point)
{
    this->point = point;
    velocity.setDx(0);
    velocity.setDy(0);
    alive = true;
}

void FlyingObject::draw()
{
    
}
