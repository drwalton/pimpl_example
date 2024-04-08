#include "pimpl.hpp"
#include <iostream>

void defaultOnClick()
{
}

struct ButtonPimpl::Impl
{
	int x, y;
	std::function<void()> onClick;
	Impl()
		:x(0), y(0), onClick(defaultOnClick)
	{}
};

ButtonPimpl::ButtonPimpl()
	:pimpl_(new Impl())
{}

ButtonPimpl::~ButtonPimpl() noexcept
{
}

ButtonPimpl& ButtonPimpl::onClick(const std::function<void()>& func)
{
	pimpl_->onClick = func;
	return *this;
}

void ButtonPimpl::click()
{
	pimpl_->onClick();
#ifdef _DEBUG
	std::cout << "[DEBUG] ButtonPimpl at (" << pimpl_->x << ", " << pimpl_->y << ") clicked!" << std::endl;
#endif
}

ButtonPimpl& ButtonPimpl::setPos(int x, int y)
{
	pimpl_->x = x;
	pimpl_->y = y;
	return *this;
}

