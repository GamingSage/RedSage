#ifndef _OBJ_H_
#define _OBJ_H_

#include "Common.h"
#include "OpenGL.h"
#include <fstream>

class OBJModel
{
private:
	VERTEXLIST vertices;
    VERTEXLIST uvs;
    VERTEXLIST normals;

public:
	VERTEXLIST getVertices() { return vertices; }
	VERTEXLIST getUVs() { return uvs; }
	VERTEXLIST getNormals() { return normals; }

	ERRORCODE loadFromFile(char* path)
	{
		FILE* file = fopen(path, "r"); 
		if( file == NULL )
		{
			PRINT("Unable to open file.");
			return false;
		}
	}
}

#endif