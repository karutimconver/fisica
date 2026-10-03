#pragma once

#include <iostream>
#include <atomic>
#include "raymath.h"

class Object3d {
protected:
    inline static std::atomic<uint64_t> gerador_id{0};
    Vector3 position;
    Vector3 velocity;
    const uint64_t id;
    float mass;
public:
    virtual std::string getID();
    Object3d();
};