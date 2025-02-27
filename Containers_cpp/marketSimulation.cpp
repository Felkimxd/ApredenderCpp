#include "Handling_Restocks.cpp"
#include "order_Processing.cpp"
#include "product_managing.cpp"
#include "storing.cpp"
#include "tracking_products.cpp"



int menuAdmin(){

    int optionAdmin = 0;

    std::cout << "Select an option:" << std::endl;
    std::cout << "1.- Add new product " << std::endl;
    std::cout << "2.- Update quantity of an existing product" << std::endl;
    std::cout << "3.- Display all available products" << std::endl;
    std::cout << "4.- Display all the inventory" << std::endl;
    std::cout << "5.- Add new Category" << std::endl;
    std::cout << "6.- Display Categories" << std::endl;
    std::cout << "7.- Handling Restocks" << std::endl;
    std::cout << "8.- Processing Restocks" << std::endl;
    std::cout << "9.- Exit" << std::endl;
    std::cout << "Option: ";
    std::cin >> optionAdmin;

    return optionAdmin;
}

int menuUser()
{

    int optionUser = 0;

    std::cout << "Select an option:" << std::endl;
    std::cout << "1.- Make an Order " << std::endl;
    std::cout << "2.- Process Orders" << std::endl;
    std::cout << "3.- Cart" << std::endl;
    std::cout << "4.- Display Cart" << std::endl;
    std::cout << "5.- Exit" << std::endl;
    std::cout << "Option: ";
    std::cin >> optionUser;

    return optionUser;
}

int main(){

    int optionPrincipal = 0;

    int flagPrincipal = 1;

    std::stack<std::pair<std::string, int>> restocks;

    std::queue<std::string> orders;
    int numOrder = 1;

    std::map<std::string, int> inventory;

    std::vector<std::string> customerCart;

    std::set<std::string> productCategories;
    

    while (flagPrincipal == 1)
    {
        int flagUser = 1;
        int flagAdmin = 1;

        std::cout << "Enter who's using the application: " << std::endl;
        std::cout << "1.- Admin" << std::endl;
        std::cout << "2.- User" << std::endl;
        std::cout << "3.- Exit" << std::endl;
        std::cout << "Option: ";
        std::cin >> optionPrincipal;

        switch (optionPrincipal)
        {
        case 1:
            
            while (flagAdmin == 1)
            {
                switch (menuAdmin())
                {
                case 1:
                    addProduct(inventory);
                    break;
                case 2:
                    editQuantity(inventory);
                    break;
                case 3:
                    availableProducts(inventory);
                    break;
                case 4:
                    displayInventory(inventory);
                    break;
                case 5:
                    newCategory(productCategories);
                    break;
                case 6:
                    diplayCategories(productCategories);
                    break;
                case 7:
                    restockBatches(restocks);
                    break;
                case 8:
                    processingRestocks(restocks);
                    break;
                case 9:
                    flagAdmin = 0;
                    break;
                default:
                    std::cout << "Write a valid option!!" << std::endl;
                    break;
                }
            }
        
            break;
        case 2:

            

            while (flagUser == 1)
            {
                switch (menuUser())
                {
                case 1:
                    manageOrders(numOrder,orders);
                    numOrder++;
                    break;
                case 2:
                    ProcessOrders(orders);
                case 3:
                    itemstoCart(customerCart);
                    break;
                case 4:
                    diplayCart(customerCart);
                    break;
                case 5:
                    flagUser = 0;
                    break;
                default:
                    std::cout << "Write a valid option!!" << std::endl;
                    break;
                }
            }
            
            break;
        case 3:
            flagPrincipal = 0;
            break;
        default:
            std::cout << "Write a valid option!!" << std::endl;
            break;
        }
    }

    std::cout << "Program Finished!" << std::endl;
    return 0;
}   