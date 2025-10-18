//
// Created by pbialas on 05.08.2020.
//

#pragma once

#include <vector>

#include "glad/gl.h"

#include "Application/application.h"

class SimpleShapeApplication : public xe::Application
{
public:
    SimpleShapeApplication(int width, int height, std::string title, bool debug, int swap_interval = 1) : Application(
                                                                                                              width, height, title,
                                                                                                              debug, swap_interval) {}

    void init() override;

    void frame() override;

private:
    float strength = 0.5;
    float mix_color[3] = {0.0, 0.0, 1.0};

    GLuint vao_;
    GLuint vao_block_;
    GLuint ubo, ubo_trans;
};