//
// Created by dydxh on 10/23/18.
//

#ifndef BREAKOUT_TEXTURE_H
#define BREAKOUT_TEXTURE_H

#include <glad/glad.h>
#include <glm/glm.hpp>

class Texture2D {
public:
    GLuint ID;
    GLuint Width, Height;

    GLuint Internal_Format;
    GLuint Image_Format;

    GLuint Wrap_S;
    GLuint Wrap_T;
    GLuint Filter_Min;
    GLuint Filter_Max;

    Texture2D();
    Texture2D(GLuint id);
//    Texture2D(const GLchar *filepath);
    void Generate(GLuint width, GLuint height, unsigned char* data);
    void Generatefloat(GLuint width, GLuint height, GLfloat* data);
    void Generatevec3(GLuint width, GLuint height, glm::vec3* data);
    void GenerateShadowMap(GLuint width, GLuint height);
    void GenerateSkymap(GLuint width, GLuint height);
    void GeneratePreciseMap(GLuint width, GLuint height);
    void GenerateMultiSampledPreciseMap(GLuint width, GLuint height);
    void GenerateMultiSampledShadowMap(GLuint width, GLuint height);
    void Bind() const;
};


#endif //BREAKOUT_TEXTURE_H
