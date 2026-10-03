#pragma once

#include "raylib.h"
#include "physicsObject.hpp"

#define PARTICLE_RADIUS 1

class Particle : public Object3d {
public:
    std::string getID() override;
    Particle();
    void draw();
};