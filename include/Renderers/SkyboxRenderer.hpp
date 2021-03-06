#pragma once

#include "Renderer.hpp"
#include "Shader.hpp"
#include "Texture.hpp"
#include "Light.hpp"

#include <glm/glm.hpp>

using namespace std;

class SkyboxRenderer : public Renderer {
public:
    SkyboxRenderer(Shader *shader, Texture **textures = NULL, Light *light = NULL);
    ~SkyboxRenderer();

    void draw(
        glm::mat4 projection,
        glm::mat4 view,
        glm::vec3 viewPos,
        glm::vec3 pos = glm::vec3(0.f),
        glm::vec3 scale = glm::vec3(1.f),
        glm::vec3 rotAxis = glm::vec3(1.f),
        GLfloat rotate = 0.f,
        glm::vec4 color = glm::vec4(1.f),
        glm::vec3 collisionSize = glm::vec3(0.f)
    );

private:
    void initRenderData();
};