#pragma once
#include <iostream>

class Element {
protected:
    int posX, posY;
    int height, width;
public:
    Element();
    Element(int, int, int, int);

    virtual bool isMonochromatic() = 0;
    virtual bool isComplementary() = 0;
    virtual bool isAnalogous() = 0;
};