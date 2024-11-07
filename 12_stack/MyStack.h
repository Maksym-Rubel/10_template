#pragma once
#include <iostream>
using namespace std;


template <typename T>
class MyStack
{
	
public:
	MyStack(size_t capacity = 10);
	~MyStack();


	bool isEmpty() const;
	bool IsFull() const;

	void InsertWithPriority(int priority, const T& element);
	void PullHighestPriorityElement();
	T Peek() const;

	void Show();

	

private:
	pair<int, T>* stack = nullptr;

	size_t capacity;
	size_t size;
	
	void reserve();
};



template<typename T>
inline void MyStack<T>::reserve()
{
	capacity *= 2;
	pair<int, T>* tmp = new pair<int, T>[capacity];
	for (size_t i = 0; i < size; i++)
	{
		tmp[i] = stack[i];
	}
	delete[] stack;
	stack = tmp;
}

template<typename T>
inline MyStack<T>::~MyStack()
{
	delete[] stack;
}

template<typename T>
inline bool MyStack<T>::isEmpty() const
{
	return size == 0;
}

template<typename T>
inline bool MyStack<T>::IsFull() const
{
	return size == capacity;
}

template<typename T>
inline void MyStack<T>::InsertWithPriority(int priority, const T& element)
{
	if (IsFull())
	{
		reserve();
	}

	stack[size++] = pair1(priority, element);
	for (size_t i = size - 1; i > 0; --i) {
		if (stack[i].first > stack[i - 1].first) {
			swap(stack[i], stack[i - 1]);
		}
		else {
			break;
		}
	}
}

template<typename T>
inline void MyStack<T>::PullHighestPriorityElement()
{
	if (isEmpty())
		return;
	for (size_t i = 1; i < size; ++i) {
		stack[i - 1] = stack[i];
	}
	--size;

}

template<typename T>
inline void MyStack<T>::Show()
{
	for(int i = size; i >= 0; --i) {
		std::cout << "Priority :: " << stack[i].first << "\tNumber :: " << stack[i].second << std::endl;
	}
}
