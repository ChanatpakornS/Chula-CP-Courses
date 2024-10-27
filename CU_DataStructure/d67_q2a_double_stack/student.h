#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void rebalance(std::stack<T> &stack_a, std::stack<T> &stack_b)
{
	int sa = stack_a.size();
	int sb = stack_b.size();
	if (sa)
	{
		int n = sa / 2;
		std::stack<T> s;
		for (int i = 0; i <= n; ++i)
		{
			s.push(stack_a.top());
			stack_a.pop();
		}
		while (!stack_a.empty())
		{
			stack_b.push(stack_a.top());
			stack_a.pop();
		}
		while (!s.empty())
		{
			stack_a.push(s.top());
			s.pop();
		}
	}
	if (sb)
	{
		int n = sb / 2;
		std::stack<T> s;
		for (int i = 0; i < n; ++i)
		{
			s.push(stack_b.top());
			stack_b.pop();
		}
		while (!stack_b.empty())
		{
			stack_a.push(stack_b.top());
			stack_b.pop();
		}
		while (!s.empty())
		{
			stack_b.push(s.top());
			s.pop();
		}
	}
}

template <typename T>
void CP::stack<T>::pop()
{
	// modify method here
	if (size() == 0)
		return;
	if (stack_a.empty() || stack_b.empty())
		rebalance(stack_a, stack_b);
	stack_a.pop();
}

template <typename T>
const T &CP::stack<T>::top()
{
	// modify method here
	if (stack_a.empty() || stack_b.empty())
		rebalance(stack_a, stack_b);
	return stack_a.top();
}

template <typename T>
const T &CP::stack<T>::bottom()
{
	// write your code here
	if (stack_a.empty() || stack_b.empty())
		rebalance(stack_a, stack_b);
	if (stack_b.empty() && stack_a.size() == 1)
		return stack_a.top();
	return stack_b.top();
}

template <typename T>
void CP::stack<T>::push_bottom(const T &element)
{
	// write your code here
	if (stack_a.empty() || stack_b.empty())
		rebalance(stack_a, stack_b);
	stack_b.push(element);
}

template <typename T>
void CP::stack<T>::pop_bottom()
{
	// write your code here
	if (size() == 0)
		return;
	if (stack_a.empty() || stack_b.empty())
		rebalance(stack_a, stack_b);
	if (stack_b.empty() && stack_a.size() == 1)
		stack_a.pop();
	else stack_b.pop();
}
#endif