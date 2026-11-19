#include "vehicle_purchase.h"
#include <cstring>

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    return kind == "car" || kind == "truck";
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    int decision = strcmp(option1.c_str(), option2.c_str());
    std::string suffix = " is clearly the better choice.";
    if (decision <= 0) {
        return option1 + suffix;
    }else{
        return option2 + suffix;
    }
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double discount_factor = 1.0;
    if(age < 3){
        discount_factor = .2;
    }
    else if(age >= 3 && age < 10){
        discount_factor = .3;
    }
    else{
        discount_factor = .5;
    }
    return original_price - (original_price * discount_factor);
}

}  // namespace vehicle_purchase
