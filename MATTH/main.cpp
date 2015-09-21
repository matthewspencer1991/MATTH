#include "Vector3.h"
#include "Helper.h"
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
	std::cout << MATTH::rad_to_deg(dot) << std::endl;
	std::cout << MATTH::deg_to_rad(MATTH::rad_to_deg(dot)) << std::endl;

	Vector3<float> T(3, 4, 7);
	Vector3<float> U(2, 1, 9);

	Vector3<float> dir = T.direction(U);
	dir.print();

	dir = T;
	std::cout << "T and U dot product: " << dir.dot(U) << "\n";
	
	return 0;
}