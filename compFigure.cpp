#include "CompFigure.h"

CompFigure::CompFigure(Point _p, int _length, COLORREF _color0, COLORREF _color1, COLORREF _color2) :
	s(new Square(_p, _length * 2, _color0, _color1)), l(new Line(_p, _length, _color2)) {}

void CompFigure::draw() {
	cout << "Composition: " << endl;
	s->draw();
	l->draw();
}

void CompFigure::hide() {
	cout << "Figure is hidden" << endl;
	s->hide();
	l->hide();
}

void CompFigure::moove(int _x, int _y) {
	s->moove(_x, _y);
	l->moove(_x, _y);
}

CompFigure::~CompFigure() {
	delete s;
	delete l;
}