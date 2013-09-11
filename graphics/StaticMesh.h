#ifndef _STATICMESH_H_
#define _STATICMESH_H_

#include "Common.h"
#include "OpenGL.h"

class StaticMesh
{
private:
	VERTEXLIST vertices;
    VERTEXLIST uvs;
    VERTEXLIST normals;

public:
	ERRORCODE loadObjFile(char* path);
}

#endif