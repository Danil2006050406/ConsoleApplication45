#pragma once
#include <iostream>
#include "PaintApi.h"

class BlueRectangle : public PaintApi
{
public:
    virtual void DrawRectangle(int x, int y, int endx, int endy) override
    {
        std::cout << "Draw Blue Rectangle\n x = " << x << " y = " << y << " endx = " << endx << " endy = " << endy << std::endl;
    }
};