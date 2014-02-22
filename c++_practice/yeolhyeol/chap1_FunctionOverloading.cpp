#include <iostream>

namespace best_com_impl
{
	void simple_func(void)
	{
		std::cout<<"bestcom이 정의한 함수"<<std::endl;
	}
}

namespace prog_com_impl
{
	void simple_func(void)
	{
		std::cout<<"procom이 정의한 함수"<<std::endl;
	}
}

int main()
{
	best_com_impl::simple_func();
	prog_com_impl::simple_func();

	return 0;
}