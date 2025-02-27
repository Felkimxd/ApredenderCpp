#include <iostream>
#include <set>

void newCategory(std::set<std::string> &productCategories)
{
    std::string productCategory;

    std::cout << "Enter the name of Category: ";
    std::cin >> productCategory;

    if (!productCategories.count(productCategory))
    {
        productCategories.insert(productCategory);
        std::cout << "Category added!" << std::endl;
    }
    else
    {
        std::cout << "Category already exists!" << std::endl;
    }

    std::cout << "==================================" << std::endl;
}

void diplayCategories(std::set<std::string> &productCategories)
{

    std::cout << "Product Categories:\n";
    for (const auto &category : productCategories)
    {
        std::cout << "- " << category << "\n";
    }

}

int main()
{
    std::set<std::string> productCategories;

    // Adding categories
    // productCategories.insert("Electronics");
    // productCategories.insert("Accessories");
    // productCategories.insert("Peripherals");

    for (int i = 0; i < 3; i++)
    {
        newCategory(productCategories);
    }

    diplayCategories(productCategories);

    return 0;
}