#pragma once

/// <summary>
/// Base class for sub problem class
/// </summary>
class ProblemBase
{
public:
	ProblemBase(const size_t problemNum)
	{
		this->_problemNum = problemNum;
	};
	virtual ~ProblemBase() {};

public:
	virtual void solve() = 0;

	size_t getProblemNum()
	{
		return _problemNum;
	}

protected:
	virtual void input() = 0;
	virtual void output() = 0;

private:
	size_t _problemNum;
};