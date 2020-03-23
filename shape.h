#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <vector>
#include <string>

class Shape
{
private:
    string Name;
    int Flache;

public:
    Shape(string name, int flache);

    int get_Flache();

    string get_Name();

    static int mul(int x1, int x2);

    static int div(int x1, int x2);

    static void apply(vector<Shape>& v, int (*function)(int, int), int val);

    void to_string(string& a);

    ~Shape();

};

#endif // SHAPE_H
