#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h>
#include "Transform.h"

class Shader
{
	
public:
	Shader(const std::string& filename);
	void Bind();
	void Update(const Transform& transform);

	~Shader();
	
private:
	static const unsigned int NUM_SHADER = 2;
	Shader(const Shader& other) {}
	void operator=(const Shader& other) {}

	enum
	{
		TRANSFORM_U,

		NUM_UNIFORMS
	};

	GLuint m_program;
	GLuint m_shaders[NUM_SHADER];
	GLuint m_uniforms[NUM_UNIFORMS];
};


#endif
