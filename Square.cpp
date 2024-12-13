#include "Square.h"

Square::Square(Point _p, int _length, COLORREF _color0, COLORREF _color1) :
	Figure(_p, _length, _color0), colorPen(_color1) {}

void Square::draw() {
	cout << "Square: ";
	cout << p;
	cout << length << endl;
	if (p.x - length / 2 <= rect.left + 250 || p.x + length / 2 >= rect.right
		|| p.y - length / 2 <= rect.top || p.y + length / 2 >= rect.bottom)
		throw Border();
	if (length <= 0)
		throw Negative();
	HPEN pen = CreatePen(PS_SOLID, 2, colorPen);
	HBRUSH brush = CreateSolidBrush(color);
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Rectangle(hdc, p.x - length / 2, p.y - length / 2, p.x + length / 2, p.y + length / 2);
	DeleteObject(pen);
	DeleteObject(brush);
}

void Square::hide() {
	cout << "Square is hidden" << endl;
	HPEN pen = CreatePen(PS_SOLID, 2, RGB(12, 12, 12));
	HBRUSH brush = CreateSolidBrush(RGB(12, 12, 12));
	SelectObject(hdc, pen);
	SelectObject(hdc, brush);
	Rectangle(hdc, p.x - length / 2, p.y - length / 2, p.x + length / 2, p.y + length / 2);
	DeleteObject(pen);
	DeleteObject(brush);
}