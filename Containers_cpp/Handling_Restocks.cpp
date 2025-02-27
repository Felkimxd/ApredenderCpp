#include <iostream>
#include <stack>

void restockBatches(std::stack<std::pair<std::string, int>> &restocks)
{
    std::string productName;
    int productStock;

    std::cout << "Enter the name of the product: ";
    std::cin >> productName;
    
    
    std::cout << "Enter the stock of the product: ";
    std::cin >> productStock;

    restocks.push({productName, productStock});

    std::cout << "Product restocked!" << std::endl;
    
    std::cout << "===============================" << std::endl;
}

void processingRestocks(std::stack<std::pair<std::string, int>> &restocks)
{

    while (!restocks.empty())
    {
        auto item = restocks.top();
        std::cout << "Restocking " << item.second << " units of " << item.first << std::endl;
        restocks.pop();
    }

}

int main()
{
    std::stack<std::pair<std::string, int>> restocks;

    
    // Adding restock batches
    // restocks.push({"Mouse", 10});
    // restocks.push({"Laptop", 2});
    // restocks.push({"Keyboard", 5});

    for (int i = 0; i < 3; i++)
    {
        restockBatches(restocks);
    }
    

    // Processing restocks
    processingRestocks(restocks);

    return 0;
}