#include "Shape.h"
#include <iostream>
#include <string>
#include <vector>

Shape::Shape(string name, int flache)
{
    Name = name;
    Flache = flache;
}

string Shape::getName(){
    return Name;
}

int Shape::getFlache(){
    return Flache;
}

void Shape::setName(string value){
    Name = value;
}

void Shape::setFlache(int value){
    Flache = value;
}

void Shape::mul(int x1, int x2){
    return x1*x2;
}

void Shape::div(int x1, int x2){
    return x1/x2;
}

void Shape::apply(std::vector<Shape> &v, int(*function)(int, int), int val){
    for(int i=0;i<v.size();i++)
        v[i].Flache = function(v[i].Flache, val);
}

void Shape::to_string(string& a){
    a += Name;
}

Shape::~Shape() {}
