#pragma once
#include "PhysicsObject.h"
#include <vector>
class PhysicsTriangles : public PhysicsObject
{
public:

	PhysicsTriangles();
	~PhysicsTriangles();
private:

	std::vector<float> triangles;
};

