#pragma once

namespace triangle {

    enum class flavor{
        equilateral,
        isosceles,
        scalene
    };

    flavor kind(double x, double y, double z);

}  // namespace triangle
