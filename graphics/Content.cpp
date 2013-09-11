#include "Content.h"

int OBJModel::loadFromFile(char* path)
{
	FILE** file = NULL;
	errno_t error = fopen_s(file, path, "r"); 
	if(file == NULL)
	{
		PRINTLN("Unable to open file.");
		return false;
	}

	while(true)
	{
		char lineHeader[128];

		int res = fscanf_s(*file, "%s", lineHeader);
		if (res == EOF)
			break;

		if (strcmp(lineHeader, "v" ) == 0 )
		{
			VERTEX vertex;
			fscanf_s(*file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z );
			vertices.push_back(vertex);
		}
		else if (strcmp(lineHeader, "vt") == 0)
		{
			UV uv;
			fscanf_s(*file, "%f %f\n", &uv.x, &uv.y );
			uvs.push_back(uv);
		}
		else if (strcmp(lineHeader, "vn") == 0 )
		{
			NORMAL normal;
			fscanf_s(*file, "%f %f %f\n", &normal.x, &normal.y, &normal.z );
			normals.push_back(normal);
		}
		else if (strcmp(lineHeader, "f") == 0 )
		{
			std::string vertex1, vertex2, vertex3;
			INDEX vertexIndex[3], uvIndex[3], normalIndex[3];
			int matches = fscanf_s(*file, "%d/%d/%d %d/%d/%d %d/%d/%d\n", &vertexIndex[0], &uvIndex[0], &normalIndex[0], &vertexIndex[1], &uvIndex[1], &normalIndex[1], &vertexIndex[2], &uvIndex[2], &normalIndex[2] );
			if (matches != 9)
			{
				PRINTLN("Unable to read file. Try exporting with other options\n");
				return ERROR_UNKNOWN;
			}

			vertexIndices.push_back(vertexIndex[0]);
			vertexIndices.push_back(vertexIndex[1]);
			vertexIndices.push_back(vertexIndex[2]);

			uvIndices.push_back(uvIndex[0]);
			uvIndices.push_back(uvIndex[1]);
			uvIndices.push_back(uvIndex[2]);

			normalIndices.push_back(normalIndex[0]);
			normalIndices.push_back(normalIndex[1]);
			normalIndices.push_back(normalIndex[2]);
		}

	}
	
	return ERROR_NONE;
}