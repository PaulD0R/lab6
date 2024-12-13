#pragma once
#include "Figure.h"
#include "Line.h"
#include "Square.h"

using namespace std;

class CompFigure : public Figure {
private:
	Square* s;
	Line* l;
public:
	CompFigure(Point, int, COLORREF, COLORREF, COLORREF);
	void draw() override;
	void hide() override;
	void moove(int, int) override;
	~CompFigure();
};