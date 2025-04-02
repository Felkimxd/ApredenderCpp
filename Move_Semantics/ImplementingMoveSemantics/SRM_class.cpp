#include <iostream>
#include<algorithm>

class Buffer
{
private:
    int *data;
    size_t size;

public:
    Buffer(size_t s) : size(s), data(new int[s])
    {
        std::cout << "Constructor called\n";
    }

    ~Buffer()
    {
        delete[] data;
        std::cout << "Destructor called\n";
    }

    // TODO: Add copy constructor and assignment operator
    Buffer::Buffer(const Buffer& other)
    : size(other.size)
    , data(new int[other.size]) // Creates a separate memory allocation for data
    {
        std::copy(other.data,other.data + other.size ,data);
        std::cout << "Copy constructor called\n";
    }

    Buffer &operator=(const Buffer &other)
    {
        if (this != &other)
        {
            delete[] data;
            size = other.size;
            data = new int[size]; 
            std::copy(other.data, other.data + size, data);
            std::cout << "Copy assignment called\n";
        }
        return *this;
    }

    // TODO: Add move constructor and move assignment operator
    Buffer::Buffer(Buffer &&other) noexcept
        : size(other.size), data(other.data) // Creates a separate memory allocation for data
    {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Move constructor called\n";
    }
};