#include <utils/angle.h>

double Angle::to_radians(const double degrees) {
    return 0.0174532925 * degrees;
};

double Angle::to_degrees(const double radians) {
    return 57.2957795130 * radians;
};
