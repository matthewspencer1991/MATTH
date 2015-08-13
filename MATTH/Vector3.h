#pragma once
#include <iostream>
namespace MATTH
{
	/*
	A class that defines a mathematical three dimensional vector (an object with a direction and length).
	type T must have a copy constructor
	type T must implement the << operator
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
		Vector3<T> operator+(const Vector3<T>& rhs);
		Vector3<T> operator-(const Vector3<T>& rhs);
		void print() const;
	private:
		T x;
		T y;
		T z;
	};

	template<typename T>
	Vector3<T>::Vector3(const T& _x, const T& _y, const T& _z)
	{
		x = _x;
		y = _y;
		z = _z;
	}

	template<typename T>
	T Vector3<T>::get_x() const
	{
		return x;
	}

	template<typename T>
	T Vector3<T>::get_y() const
	{
		return y;
	}

	template<typename T>
	T Vector3<T>::get_z() const
	{
		return z;
	}

	template<typename T>
	void Vector3<T>::set_x(const T& new_x)
	{
		x = new_x;
	}

	template<typename T>
	void Vector3<T>::set_y(const T& new_y)
	{
		y = new_y;
	}

	template<typename T>
	void Vector3<T>::set_z(const T& new_z)
	{
		z = new_z;
	}

	template<typename T>
	Vector3<T> Vector3<T>::operator+(const Vector3<T>& rhs)
	{
		return Vector3(x + rhs.get_x(), y + rhs.get_y(), z + rhs.get_z());
	}

	template<typename T>
	Vector3<T> Vector3<T>::operator-(const Vector3<T>& rhs)
	{
		return Vector3(x - rhs.get_x(), y - rhs.get_y(), z - rhs.get_z());
	}

	template<typename T>
	void Vector3<T>::print() const
	{
		std::cout << "X: " << x << " Y: " << y << " Z: " << z << std::endl;
	}
}



