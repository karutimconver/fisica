#include "particle.hpp"

Particle::Particle() : Object3d() {
    
}

std::string Particle::getID() {
    return "particle_" + std::to_string(this->id);
}

void Particle::draw() {
    DrawSphere(this->position, 1, RED);
}