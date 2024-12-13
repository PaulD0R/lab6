#pragma once
#include "Figure.h"

class FQueue {
private:
	queue<Figure*, list<Figure*>> qf;
public:
	FQueue(initializer_list<Figure*>);
	void print();
	void add(Figure*);
	~FQueue();
};