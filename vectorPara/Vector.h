#pragma once
#include <iostream>
#include <string>
namespace VectorSpace {
	template <typename T>
	struct Vector {
	protected:
		size_t n;
		T* data;
	public:
		Vector(size_t n = 0) :
			n{n},
			data{ new T[n] } {};
		size_t size() const
		{
			return n;
		};
		Vector(const Vector<T>& v) :
			Vector{ v.size() }
		{
			for (size_t l = 0; l < n; ++l)
				data[l] = v.data[l];
		}
		string& operator[] (size_t k, T v)
		{
			for (size_t i = 0; i < k; ++i)
			{
				return data[i];
			}
		}
	};
}

