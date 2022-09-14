#include <iostream>

template <typename T>
T sum(T x, T y)
{
	T z = x + y;
	return z;
}

int main()
{
	sum<int>(1, 2);
	sum<double>(1.5, 2.4);

	return 0;
}