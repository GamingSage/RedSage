#ifndef _GRAPHICS_H_
#define _GRAPHICS_H_

#include "glew/glew.h"
#include "freeglut/freeglut.h"
#include "gli/gli.hpp"
#include <vector>

typedef glm::vec3 POSITION;
typedef glm::vec3 VERTEX;
typedef glm::vec3 NORMAL;
typedef glm::vec2 UV;
typedef unsigned int INDEX;
typedef std::vector<VERTEX> VERTEXLIST;
typedef std::vector<INDEX> INDEXLIST;
typedef std::vector<NORMAL> NORMALLIST;
typedef std::vector<UV> UVLIST;

#endif