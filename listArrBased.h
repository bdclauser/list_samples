#pragma once
#include <iostream>
using namespace std;

template <typename T>
class myList
{
private:
	T *list;
	int len;
	int maxSize;
public:
	myList() : front(NULL), len(0) {}
	myList(int size);
	void insertAt(int loc, const T& item);
	void insertBack(const T& item);
	void removeAt(int loc);
	void display();
	int size() const { return len; }
	int maxListSize() const { return maxSize; }
	bool isEmpty() const;
	bool isFull() const;
};

template <typename T>
void myList<T>::removeAt(int loc)
{
	if (loc <= 0 || loc >= maxSize)
		cout << "out of range location" << endl;
	else
	{
		for (int i = loc; i < len - 1; i++)
			list[i] = list[i + 1];
		len--;
	}
}

template<typename T>
inline myList<T>::myList(int size)
{
	if (size < 0)
		maxSize = 100;
	else
		maxSize = size;
	len = 0;
	list = new T[maxSize];
}

template <typename T>
void myList<T>::insertAt(int loc, const T& item)
{
	if (loc <= 0 || loc >= maxSize)
		cout << "out of range location" << endl;
	else
	{
		if (len >= maxSize)
			cout << "full" << endl;
		else
		{
			for (int i = len; i > loc; i--)
				list[i] = list[i - 1];
			list[loc] = item;
			len++;
		}
	}
}

template <typename T>
void myList<T>::insertBack(const T& item)
{
	if (len >= maxSize)
		cout << "full" << endl;
	else
	{
		list[len] = item;
		len++;
	}
}

template <typename T>
void myList<T>::display()
{
	for (int i = 0; i < len; i++)
		cout << list[i] << ", ";
	cout << endl;
}

template <typename T>
inline bool myList<T>::isEmpty() const
{
	return len == 0;
}

template <typename T>
inline bool myList<T>::isFull() const
{
	return == maxSize;
}
