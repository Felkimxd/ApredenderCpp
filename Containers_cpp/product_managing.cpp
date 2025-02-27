#include <iostream>
#include <map>

void displayInventory(const std::map<std::string, int> &inventory)
{
    std::cout << "Current Inventory:\n";
    for (const auto &item : inventory)
    {
        std::cout << item.first << ": " << item.second << " in stock\n";
    }
    std::cout << "===============================" << std::endl;
}

void addProduct(std::map<std::string, int> &inventory)
{
    std::string productName;
    
    std::cout << "Enter the name of the product: ";
    std::cin >> productName;
    if (!inventory.count(productName))
    {
        int productStock;
        std::cout << "Enter the stock of the product: ";
        std::cin >> productStock;

        inventory[productName] = productStock;

        std::cout << "Product added!" << std::endl;
        
    }
    else
    {
        std::cout << "That product already exists!" << std::endl;
    }
    
    std::cout << "===============================" << std::endl;
}

void editQuantity(std::map<std::string, int> &inventory)
{
    std::string productKey;

    std::cout << "Enter the name of the product to change: ";
    std::cin >> productKey;

    if (inventory.count(productKey))
    {
        int productStock;
        std::cout << "Enter the stock of the product: ";
        std::cin >> productStock;

        inventory[productKey] = productStock;
    }
    else
    {
        std::cout << "ERROR, product doesn't exist!" << std::endl;
    }
    std::cout << "===============================" << std::endl;
}

void availableProducts(const std::map<std::string, int> &inventory)
{

    std::cout << "Available Products:" << std::endl;
    for (auto kv : inventory)
    {
       
        if (kv.second > 0)
        {
            std::cout << kv.first << ": " << kv.second << " in stock" << std::endl;
        }
        
    }
    std::cout << "===============================" << std::endl;
}

// int main()
// {
//     std::map<std::string, int> inventory;

//     // Adding products
//     // inventory["Laptop"] = 5;
//     // inventory["Mouse"] = 20;
//     // inventory["Keyboard"] = 10;
//     for (int i = 0; i < 3; i++)
//     {
//         addProduct(inventory);
//     }
    
//     editQuantity(inventory);

//     availableProducts(inventory);

//     displayInventory(inventory);

//     return 0;
// }