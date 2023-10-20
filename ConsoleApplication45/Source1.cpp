#include <iostream>
#include "PaintApi.h"

class BlackRectangle : public PaintApi
{
public:
    virtual void DrawRectangle(int x, int y, int endx, int endy) override
    {
        std::cout << "Draw Black Rectangle\n x = " << x << " y = " << y << " endx = " << endx << " endy = " << endy << std::endl;
    }
};