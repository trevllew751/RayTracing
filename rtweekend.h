//
// Created by Trevor on 1/30/2023.
//

#ifndef RAYTRACING_RTWEEKEND_H
#define RAYTRACING_RTWEEKEND_H

#include <cmath>
#include <limits>
#include <memory>

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

// Common Headers

#include "ray.h"
#include "vec3.h"

#endif //RAYTRACING_RTWEEKEND_H
