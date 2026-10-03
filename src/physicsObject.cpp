#include "physicsObject.hpp"

Object3d::Object3d() : id(++gerador_id) {}

std::string Object3d::getID() {
    return std::to_string(this->id);
}