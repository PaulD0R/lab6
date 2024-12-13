#pragma once
#include "Figure.h"

class Line : public Figure {
public:
	Line(Point, int, COLORREF);
	void draw() override;
	void hide() override;
};