#pragma once

namespace MATTH
{
	/*
	A class that defines a mathematical three dimensional vector (an object with a direction and length).
	type T must have a copy constructor
	*/
	template<typename T>
	class Vector3
	{
	public:
		Vector3(const T& _x, const T& _y, const T& _z);
		T get_x() const;
		T get_y() const;
		T get_z() const;
		void set_x(const T& new_x);
		void set_y(const T& new_y);
		void set_z(const T& new_z);
	private:
		T x;
		T y;
		T z;
	};

	template<typename T>
	Vector3::Vector3(const T& _x, const T& _y, const T& _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	template<typename T>
	T Vector3::get_x() const
	{
		return x;
	}

	template<typename T>
	T Vector3::get_y() const
	{
		return y;
	}

	template<typename T>
	T Vector3::get_z() const
	{
		return z;
	}

	template<typename T>
	T Vector3::set_x(const T& new_x)
	{
		x = new_x;
	}

	template<typename T>
	T Vector3::set_y(const T& new_y)
	{
		y = new_y;
	}

	template<typename T>
	T Vector3::set_z(const T& new_z)
	{
		z = new_z;
	}
}



