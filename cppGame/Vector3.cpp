#include "Vector3.h"

Vector3 Vector3::operator+(Vector3 const& vec) const
{
	return {this->X + vec.X, this->Y + vec.Y, this->Z + vec.Z};
}
