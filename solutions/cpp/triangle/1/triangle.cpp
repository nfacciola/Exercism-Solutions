#include "triangle.h"
#include <stdexcept>

namespace triangle {


    flavor kind(double x, double y, double z)
    {

        if(x <= 0 || y <= 0 || z <= 0){
            throw std::domain_error("Triangle sides must have length greater than 0.0");
        }

        if((!(x + y >= z)) || (!(y + z >= x)) || (!(x + z >= y))){
            throw std::domain_error("Side lengths do not satisfy triangle inequality");
        }

        if(x == y && y == z){
            return flavor::equilateral;
        }else if(x == y || y == z || x == z){
            return flavor::isosceles;
        }else{
            return flavor::scalene;
        }
    }


}  // namespace triangle
