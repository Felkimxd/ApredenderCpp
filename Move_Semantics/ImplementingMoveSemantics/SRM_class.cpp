#include <iostream>
#include<algorithm>
#include <chrono>
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
    Buffer(const Buffer& other)
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
    Buffer(Buffer &&other) noexcept
        : size(other.size), data(other.data) // Creates a separate memory allocation for data
    {
        other.data = nullptr;
        other.size = 0;
        std::cout << "Move constructor called\n";
    }

    Buffer &operator=(Buffer &&other) noexcept
    {
        if (this != &other)
        {
            delete[] data;
            data = other.data;
            size = other.size;

            other.data = nullptr;
            other.size = 0;
            std::cout << "Move assignment called\n";
        }
        return *this;
    }
};

int main()
{
    const size_t bufferSize = 10000000; // Tamaño grande del buffer

    // Medir tiempo para copiar
    auto startCopy = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10; ++i) // Repetir para obtener un promedio
    {
        Buffer b1(bufferSize);
        Buffer b2 = b1; // Llama al constructor de copia
    }
    auto endCopy = std::chrono::high_resolution_clock::now();
    std::cout << "Copy Duration: " << std::chrono::duration_cast<std::chrono::milliseconds>(endCopy - startCopy).count() << " ms\n";

    // Medir tiempo para mover
    auto startMove = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10; ++i) // Repetir para obtener un promedio
    {
        Buffer b1(bufferSize);
        Buffer b2 = std::move(b1); // Llama al constructor de movimiento
    }
    auto endMove = std::chrono::high_resolution_clock::now();
    std::cout << "Move Duration: " << std::chrono::duration_cast<std::chrono::milliseconds>(endMove - startMove).count() << " ms\n";

    return 0;

}

//Questions:
/*
- What constructors and assignments are called and when ?
The copy contructor is called when you create a new object as a copy of an existing object.
The copy assignment operator is called when you assign an existing object to another existing object.
The move constructor is called when you create a new object by moving an existing object.
The move assignment operator is called when you assign an existing object to another existing object using std::move.

- What happens to the source object after a move?
The source object is left in a valid but unspecified state.abort

- What would happen if you didn’t define the move constructor/assignment?
The object pointer in the soruce destination objects would point to the same memory.

Summary:

What did you learn about move semantics?

I learned that move semantics allow for the transfer of resources from one object to another without copying it unnecesarily, which can improve performance.

In what kinds of projects do you think this would matter?

In projectas that manage large amounts of data or resources, such as game engines, graphics applications, or any application that requires high performance and low latency.

What are some risks of using std::move incorrectly?

That can lead to memory leaks and undefined behavior.
*/