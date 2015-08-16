#include "Helper.h"

namespace MATTH
{
	float deg_to_rad(const float deg)
	{
		return deg * PI / 180;
	}

	float rad_to_deg(const float rad)
	{
		return rad * 180 / PI;
	}

	const float PI = 3.14159265359;
}