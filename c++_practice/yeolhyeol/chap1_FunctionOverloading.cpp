#include <iostream>

namespace best_com_impl
{
	void simple_func(void)
	{
		std::cout<<"bestcom�� ������ �Լ�"<<std::endl;
	}
}

namespace prog_com_impl
{
	void simple_func(void)
	{
		std::cout<<"procom�� ������ �Լ�"<<std::endl;
	}
}

int main()
{
	best_com_impl::simple_func();
	prog_com_impl::simple_func();

	return 0;
}