#include "Vector3.h"
using namespace MATTH;

int main()
{
	Vector3<int> P(1, 2, 3);
	Vector3<int> Q(0, 0, 0);
	const int SCALAR = 100;
	Q = P *= SCALAR;
	P.print();
	Q.print();

	Vector3<float> R(1, 0, 0);
	Vector3<float> S(0, 1, 0);
	float dot = R.dot(S);
	std::cout << dot * 180 / 3.14159 << std::endl;
	return 0;
}