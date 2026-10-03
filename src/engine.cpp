#include "engine.hpp"

PhysicsSystem::PhysicsSystem() {

}

Particle* PhysicsSystem::createParticle() {
    Particle particle;
    this->physicsObjects.push_back(particle);
    return &particle;
}