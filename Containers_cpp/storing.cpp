#include <iostream>
#include <vector>

void itemstoCart(std::vector<std::string> &customerCart)
{
    std::string productName;
   
    std::cout << "Enter the name of the product: ";
    std::cin >> productName;

    customerCart.push_back(productName);

    std::cout << "Product added to cart!" << std::endl;

    std::cout << "===============================" << std::endl;
}

void diplayCart(std::vector<std::string> &customerCart)
{

    std::cout << "Items in customer cart:\n";
    for (const auto &item : customerCart)
    {
        std::cout << "- " << item << "\n";
    }

}

// int main() {
//     std::vector<std::string> customerCart;

//     // Adding items to cart
//     for (int i = 0; i < 3; i++)
//     {
//         itemstoCart(customerCart);
//     }
    
//     // customerCart.push_back("Laptop");
//     // customerCart.push_back("Mouse");
//     // customerCart.push_back("Keyboard");

//     diplayCart(customerCart);

//     return 0;
// }