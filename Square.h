#pragma once
#include "Figure.h"

class Square : public Figure {
private:
	COLORREF colorPen;
public:
	Square(Point, int, COLORREF, COLORREF);
	void draw() override;
	void hide() override;
};