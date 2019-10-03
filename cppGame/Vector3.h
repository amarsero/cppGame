
#pragma once
struct Vector3
{
	float X{}, Y{}, Z{};
	Vector3() = default;
	Vector3(float x, float y, float z) : X(x), Y(y), Z(z) {}
	Vector3(float x, float y) : X(x), Y(y), Z(0) {}
	Vector3 operator+ (Vector3 const& vec) const;
	::Vector3& operator+=(const Vector3& vector3);
};
