// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"
heaven::Vessel::Vessel(std::string x, int y) {this->x = x; this->generation = y; this->busters = 0; this->current_system = star_map::System::Sol;}
heaven::Vessel::Vessel(std::string x, int y, star_map::System z) {this->x = x; this->generation = y; this->busters = 0; this->current_system = z;}

heaven::Vessel heaven::Vessel::replicate(std::string s){
    return heaven::Vessel(s, 2);
}

void heaven::Vessel::make_buster(){
    this->busters++;
}

bool heaven::Vessel::shoot_buster(){
    if(busters > 0){
        this->busters--;
        return true;
    }else{
        return false;
    }
}

std::string heaven::get_older_bob(Vessel v1, Vessel v2){
    if(v1.generation <= v2.generation){
        return v1.x;
    }else{
        return v2.x;
    }
}

bool heaven::in_the_same_system(Vessel v1, Vessel v2){
    return v1.current_system == v2.current_system;
}