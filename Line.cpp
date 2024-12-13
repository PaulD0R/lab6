#include "Line.h"

Line::Line(Point _p, int _length, COLORREF _color) : Figure(_p, _length, _color) {}

void Line::draw() {
	cout << "Line: ";
	cout << p;
	cout << length << endl;
	if (p.x <= rect.left + 250 || p.x >= rect.right || p.y - length <= rect.top || p.y >= rect.bottom)
		throw Border();
	if (length <= 0)
		throw Negative();
	HPEN pen = CreatePen(PS_SOLID, 2, color);
	SelectObject(hdc, pen);
	POINT bp;
	MoveToEx(hdc, p.x, p.y, &bp);
	LineTo(hdc, p.x, p.y - length);
	DeleteObject(pen);
}

void Line::hide() {
	cout << "Line is hidden" << endl;
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(12, 12, 12));
	SelectObject(hdc, pen);
	POINT bp;
	MoveToEx(hdc, p.x, p.y, &bp);
	LineTo(hdc, p.x, p.y - length);
	DeleteObject(pen);
}