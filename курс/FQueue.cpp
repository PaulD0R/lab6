#include "fqueue.h"

FQueue::FQueue(initializer_list<Figure*> il) {
	for (Figure* f : il)
		qf.push(f);
}

void FQueue::print() {
	FQueue newqf = *this;
	while (!newqf.qf.empty()) {
		newqf.qf.front()->draw();
		cout << " ";
		newqf.qf.pop();
	}
	cout << std::endl;
}

void FQueue::add(Figure* f) {
	qf.push(f);
}

FQueue::~FQueue() {
	while (!qf.empty())
		qf.pop();
}