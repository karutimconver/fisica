#pragma once

#include <vector>
#include "particle.hpp"

class PhysicsSystem {
private:
    std::vector<Object3d> physicsObjects;
public:
    PhysicsSystem();
    Particle* createParticle();
    void update();
};