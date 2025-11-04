#include "library_header.h"

Math::Math(int a, int b) : a(a), b(b) {}

int Math::sum() {
	return this->a + this->b;
}

int sum(int a, int b) {
	return a + b;
}