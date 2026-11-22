#pragma once
#include <string> 
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

    int preparationTime(std::vector<std::string> layers, int ptpl);
    int preparationTime(std::vector<std::string> layers);
    amount quantities(std::vector<std::string> layers);
    void addSecretIngredient(std::vector<std::string>& myList, std::vector<std::string> friendsList);
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int scale);
    void addSecretIngredient(std::vector<std::string>& myList, std::string secretIngredient);

}  // namespace lasagna_master
