#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
private:
    int x;
    int y;
    int endx;
    int endy;

public:
    Rectangle(int pX, int pY, int pEndX, int pEndY, std::shared_ptr<PaintApi> pApi)
        : Figure(pApi), x(pX), y(pY), endx(pEndX), endy(pEndY) {}

    virtual void DrawFigure() const override
    {
        api->DrawRectangle(x, y, endx, endy);
    }
};