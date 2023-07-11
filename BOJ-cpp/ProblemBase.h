namespace BOJ
{
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
		void solve()
		{
			// process input
			input();

			// make result
			std::string result = logic();

			// print result
			output(result);
		}

		size_t getProblemNum() const
		{
			return _problemNum;
		}

	protected:
		virtual void input() = 0;
		virtual std::string logic() = 0;
		virtual void output(std::string result) = 0;

	private:
		size_t _problemNum;
	};
}