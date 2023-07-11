#pragma once

#include <iostream>
#include <string>
#include <stack>
#include "ProblemBase.h"

namespace BOJ
{
	class BOJ1662 : public ProblemBase
	{
	public:
		BOJ1662(const size_t problemNum) : ProblemBase(problemNum) {};
		~BOJ1662() {}

	protected:
		void input() override;
		std::string logic() override;
		void output(std::string result) override;

	private:
		int sum;
		std::string s;
		std::stack<char> stack;
	};

	void BOJ1662::input()
	{
		sum = 0;
		std::cin >> s;
	}

	std::string BOJ1662::logic()
	{
		for (size_t i = 0; i < s.length(); i++)
		{
			char c = s.at(i);

			if (c == ')')
			{
				int cnt = 0;
				while (stack.top() != '(')
				{
					stack.pop();
					cnt++;
				}

				// remove '(' from stack
				stack.pop();

				// add sub-result to sum
				sum = ((sum + cnt) * (stack.top() - '0'));

				// remove multiple 
				stack.pop();
			}
			else
			{
				stack.push(c);
			}
		}

		sum += stack.size();

		return std::to_string(sum);
	}

	void BOJ1662::output(std::string result)
	{
		std::cout << result << std::endl;
	}
}
