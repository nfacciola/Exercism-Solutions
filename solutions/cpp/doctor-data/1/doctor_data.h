#if !defined(DOCTOR_DATA_H)
#define DOCTOR_DATA_H
#include <string>
namespace star_map{
    enum class System{
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}
namespace heaven{
    class Vessel{
        public:
            std::string x{};
            int generation{};
            int busters{};
            star_map::System current_system{};
            Vessel(std::string x, int y);
            Vessel(std::string x, int y, star_map::System z);
            Vessel replicate(std::string s);
            void make_buster();
            bool shoot_buster();
    };
    std::string get_older_bob(Vessel v1, Vessel v2);
    bool in_the_same_system(Vessel v1, Vessel v2);
}
#endif