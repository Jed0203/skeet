#pragma once
#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
	private:
	   float dx;
	   float dy;

    public:
		Velocity();

		float getDx() const;
		float getDy() const;
		void setDx(float dx);
		void setDy(float dy);

};
#endif // !VELOCITY_H
