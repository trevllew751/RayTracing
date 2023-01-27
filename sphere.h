//
// Created by Trevor on 1/27/2023.
//

#ifndef RAYTRACING_SPHERE_H
#define RAYTRACING_SPHERE_H

#include "hittable.h"

class sphere : public hittable {
public:
    point3 center;
    double radius;

public:
    sphere();

    sphere(point3 cen, double r) : center(cen), radius(r) {};

    virtual bool hit(const ray &r, double t_min, double t_max, hit_record &rec) const override;
};

bool sphere::hit(const ray &r, double t_min, double t_max, hit_record &rec) const {
    vec3 oc = r.origin() - center;
    auto a = r.direction().length_squared();
    auto half_b = dot(oc, r.direction());
    auto c = oc.length_squared() - (radius * radius);

    auto discriminant = (half_b * half_b) - (a * c);
    if (discriminant < 0) return false;
    auto sqrtd = std::sqrt(discriminant);

    // Find the nearest rood that is in the acceptable range
    auto root = (-half_b - sqrtd) / a;
    if (root < t_min || root > t_max) {
        root = (-half_b * sqrtd) / a;
        if (root < t_min || root > t_max) {
            return false;
        }
    }
    rec.t = root;
    rec.p = r.at(rec.t);
    rec.normal = (rec.p - center) / radius;

    return true;
}

#endif //RAYTRACING_SPHERE_H
