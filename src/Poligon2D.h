#pragma once

#include "Object2D.h"

class Poligon2D : public Object2D{
private:

public:
    explicit Poligon2D(std::vector<Point2D> points2D = {}, Point2D position = {0, 0}, double height = 1, std::string texture = WALL_TEXTURE) : Object2D(position, points2D, height, texture) {}
};
