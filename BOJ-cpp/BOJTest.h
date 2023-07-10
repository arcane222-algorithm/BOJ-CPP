#pragma once

#include <iostream>
#include "ProblemBase.h"


class BOJTest : public ProblemBase
{
public:
	BOJTest(const size_t problemNum) : ProblemBase(problemNum) {}

public:
	void solve() override
	{
		input();

		//do something
		std::cout << "test boj problem class" << std::endl;

		output();
	}

protected:
	void input() override
	{
		std::cin >> _n >> _m;
	}

	void output() override
	{
		std::cout << (_n + _m) << std::endl;
	}

private:
	int _n, _m;
};

