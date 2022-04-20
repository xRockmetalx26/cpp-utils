//
// Created by xRockmetalx
//

#ifndef ANGLE_H
#define ANGLE_H

#define PI 3.14159265359

class Angle {
public:

    Angle() = delete;
    Angle(const Angle &) = delete;
    Angle(const Angle &&) = delete;
    Angle& operator = (const Angle &) = delete;
    Angle& operator = (const Angle &&) = delete;
    ~Angle() = delete;

    static double to_radians(double degrees);
    static double to_degrees(double radians);
};

#endif // ANGLE_H
