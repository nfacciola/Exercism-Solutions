#include "lasagna_master.h"

namespace lasagna_master {

    int preparationTime(std::vector<std::string> layers, int ptpl){
        return layers.size() * ptpl;
    }

    int preparationTime(std::vector<std::string> layers){
        return layers.size() * 2;
    }

    amount quantities(std::vector<std::string> layers)
    {
        amount needed{};
        for(const auto& l : layers)
        {
            if (l == "sauce"){
                needed.sauce += 0.2;
            }else if(l == "noodles"){
                needed.noodles += 50;
            }
        }
        return needed;
    }

    void addSecretIngredient(std::vector<std::string>& myList, std::vector<std::string> friendsList)
    {
        myList.back() = friendsList.back();
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int scale){
        double scaleFactor = scale / 2.0;
        std::vector<double> scaledQuantities{};
        scaledQuantities.reserve(quantities.size());
        
        for(const auto& q : quantities)
        {
            scaledQuantities.push_back(q * scaleFactor);
        }
        return scaledQuantities;
    }

    void addSecretIngredient(std::vector<std::string>& myList, std::string secretIngredient)
    {
        myList.back() = secretIngredient;
    }

}  // namespace lasagna_master
