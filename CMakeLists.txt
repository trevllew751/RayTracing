cmake_minimum_required(VERSION 3.21)
project(RayTracing)

set(CMAKE_CXX_STANDARD 20)

add_executable(RayTracing main.cpp vec3.h color.h ray.h hittable.h sphere.h hittable_list.h rtweekend.h camera.h)
