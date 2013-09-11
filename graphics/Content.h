#ifndef _CONTENT_H_
#define _CONTENT_H_

#include "Common.h"
#include "graphics.h"
#include <fstream>

class Model
{

protected:
	INDEXLIST vertexIndices;
	INDEXLIST uvIndices;
	INDEXLIST normalIndices;
	VERTEXLIST vertices;
	UVLIST uvs;
	NORMALLIST normals;

public:
	VERTEXLIST getVertices() { return vertices; }
	UVLIST getUVs() { return uvs; }
	NORMALLIST getNormals() { return normals; }
	INDEXLIST getVertexIndices() { return vertexIndices; }
	INDEXLIST geUVIndices() { return uvIndices; }
	INDEXLIST getNormalIndices() { return normalIndices; }
	int loadFromFile(char* path);
};

class OBJModel : public Model
{

public:
	int loadFromFile(char* path);
};

#endif