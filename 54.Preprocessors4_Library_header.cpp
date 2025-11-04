#pragma once
class Math {
private:
	int a{};
	int b{};

public:
	Math(int a, int b);

	int sum();
};

int sum(int a, int b);