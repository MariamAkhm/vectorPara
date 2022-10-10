#pragma once
namespace VectorSpace {
	template <typename T>
	struct Vector {
	protected:
		T* data;
		size_t n;
	public:
		Vector(size_t n = 0) :
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
	};
}

