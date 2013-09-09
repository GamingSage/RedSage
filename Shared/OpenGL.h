#include "OpenGL\include\glew.h"
#include "OpenGL\include\freeglut.h"

#include <vector>

struct Vector3f
{
	GLfloat x;
	GLfloat y;
	GLfloat z;
};

typedef Vector3f POSITION;
typedef Vector3f VERTEX;
typedef std::vector<VERTEX> VERTEXLIST;