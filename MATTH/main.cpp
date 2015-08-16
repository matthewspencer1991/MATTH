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
	return 0;
}