#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
    void printBasic(int rows, int cols, char symbol);
    void printOutline(int rows, int cols, char symbol, char border);
    void printRect(int width, char symbol);
    void printTriangle(int width, char16_t symbol, bool inv);
//    void printTriangleInverse(int width, char symbol);
};

#endif // SHAPE_H

