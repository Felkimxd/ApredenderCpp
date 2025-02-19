/*
Structured binding
auto [var1, var2, ...] = expression;
allows you to unpack and bind elements from a tuple, array, struct, or other aggregate types directly into individual variables

Ejemplo:
struct Point {
    int x;
    int y;
};
Point p = {10, 20};
auto [x, y] = p; // x = 10, y = 20
*/