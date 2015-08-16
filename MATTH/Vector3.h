#pragma once
#include <iostream>
#include <cmath>
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
		Vector3<T>& operator+=(const Vector3<T>& rhs);
		Vector3<T> operator-(const Vector3<T>& rhs);
		Vector3<T>& operator-=(const Vector3<T>& rhs);
		Vector3<T> operator*(const T& rhs);
		Vector3<T>& operator*=(const T& rhs);
		T length() const;
		Vector3<T>& normalise();
		T dot(const Vector3<T>& rhs) const;
		Vector3<T> direction(const Vector3& rhs) const;
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
	Vector3<T>& Vector3<T>::operator+=(const Vector3<T>& rhs)
	{
		x *= rhs; 
		y *= rhs;
		z *= rhs;
		return *this;
	}

	template<typename T>
	Vector3<T> Vector3<T>::operator-(const Vector3<T>& rhs)
	{
		return Vector3(x - rhs.get_x(), y - rhs.get_y(), z - rhs.get_z());
	}

	template<typename T>
	Vector3<T>& Vector3<T>::operator-=(const Vector3<T>& rhs)
	{
		x *= rhs;
		y *= rhs;
		z *= rhs;
		return *this;
	}

	template<typename T>
	Vector3<T> Vector3<T>::operator*(const T& rhs)
	{
		return Vector3(x * rhs, y * rhs, z * rhs);
	}

	template<typename T>
	Vector3<T>& Vector3<T>::operator*=(const T& rhs)
	{
		x *= rhs;
		y *= rhs;
		z *= rhs;
		return *this;
	}

	template<typename T>
	T Vector3<T>::length() const
	{
		return x * x + y * y + z * z;
	}

	template<typename T>
	Vector3<T>& Vector3<T>::normalise()
	{
		T length = length();
		x = x / length;
		y = y / length;
		z = z / length;
		return *this;
	}

	template<typename T>
	T Vector3<T>::dot(const Vector3<T>& rhs) const
	{
		T p_q_cos_theta = x * rhs.get_x() + y * rhs.get_y() + z * rhs.get_z();

		Vector3<T> p = *this;
		Vector3<T> q = rhs;

		T p_length = p.length();
		T q_length = q.length();

		T cos_theta = p_q_cos_theta / p_length * q_length;

		T theta_rad = acos(cos_theta);
		return theta_rad;
	}

	template<typename T>
	Vector3<T> Vector3<T>::direction(const Vector3<T>& rhs) const
	{
		Vector3<T> P = *this;
		Vector3<T> Q = rhs;

		return Q - P;
	}

	template<typename T>
	void Vector3<T>::print() const
	{
		std::cout << "X: " << x << " Y: " << y << " Z: " << z << std::endl;
	}
}



