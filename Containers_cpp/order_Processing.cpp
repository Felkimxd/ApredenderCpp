#include <iostream>
#include <queue>

void manageOrders(const int numOrder,std::queue<std::string> &orders)
{
    std::string numOrderStr;
    std::string customerOrder;
    std::string customerOrderComplete;

    numOrderStr = std::to_string(numOrder);
    customerOrderComplete = "Order#" + numOrderStr+": ";
    std::cout << "Enter the "<< customerOrderComplete;
    std::cin >> customerOrder;

    customerOrderComplete += customerOrder;

    orders.push(customerOrderComplete);

    std::cout << "Order accepted" << std::endl;
    std::cout << "==================================" << std::endl;
}

void ProcessOrders(std::queue<std::string> &orders)
{
    while (!orders.empty())
    {
        std::cout << "Processing " << orders.front() << std::endl;
        orders.pop();
    }
}

int main()
{
    std::queue<std::string> orders;
    int numOrder = 1;

    // Adding orders
    for (int i = 0; i < 3; i++)
    {   
        manageOrders(numOrder,orders);
        numOrder++;
    }
    
    // orders.push("Order#2: Mouse");
    // orders.push("Order#3: Keyboard");

    // Processing orders
    ProcessOrders(orders);

    return 0;
}