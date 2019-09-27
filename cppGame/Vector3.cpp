#include "Vector3.h"

Vector3 Vector3::operator+(Vector3 const& vec) const
{
	return {this->X + vec.X, this->Y + vec.Y, this->Z + vec.Z};
}

::Vector3& Vector3::operator+=(const Vector3& vector3)
{
	this->X += vector3.X;
	this->Y += vector3.Y;
	this->Z += vector3.Z;
	return *this;
}
