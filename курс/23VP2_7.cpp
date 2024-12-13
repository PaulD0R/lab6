#include "CompFigure.h"
#include "Fqueue.h"

int main() {
	try {
		Figure* s[3];
		s[0] = new Square({ 500, 100 }, 100, RGB(255, 255, 0), RGB(255, 0, 255));
		s[1] = new Line({ 600, 150 }, 80, RGB(0, 255, 255));
		s[2] = new CompFigure({ 700, 100 }, 75, RGB(0, 255, 0), RGB(0, 0, 255), RGB(255, 0, 0));
		FQueue qfueue({ s[0], s[1], s[2] });
		qfueue.print();
		Sleep(1000);
		int mooveX = 500;
		for (auto i : s) {
			i->moove(mooveX, 200);
			mooveX += 100;
		}
		Sleep(1000);
		for (auto i : s)
			i->hide();
		Sleep(1000);
	}
	catch (Figure::Border er) {
		er.error();
	}
	catch (Figure::Negative er) {
		er.error();
	}
	return 0;
}