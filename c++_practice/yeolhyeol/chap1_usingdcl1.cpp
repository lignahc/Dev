#include <iostream>

namespace hybrid
{
	void hybfunc(void)
	{
		std::cout<<"hi"<<std::endl;
		std::cout<<"hello"<<std::endl;
	}
}

int main()
{
	using hybrid::hybfunc;
	hybfunc();

	return 0;
}
