//
// Created by Trevor on 2/3/2023.
//

#ifndef RAYTRACING_MATERIAL_H
#define RAYTRACING_MATERIAL_H

#include "rtweekend.h"

struct hit_record;

class material {
public:
    virtual bool scatter(const ray &r_in, const hit_record &rec, color &attenuation, ray &scattered) const = 0;
};

#endif //RAYTRACING_MATERIAL_H
