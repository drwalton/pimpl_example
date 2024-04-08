#include "nopimpl.hpp"
#include <iostream>

ButtonNoPimpl::ButtonNoPimpl()
	:x_(0), y_(0), onClick_(ButtonNoPimpl::defaultOnClick)
{
}

ButtonNoPimpl::~ButtonNoPimpl() noexcept
{
}

ButtonNoPimpl& ButtonNoPimpl::onClick(const std::function<void()>& func)
{
	onClick_ = func;
	return *this;
}

void ButtonNoPimpl::click()
{
	onClick_();
#ifdef _DEBUG
	std::cout << "[DEBUG] ButtonNoPimpl at (" << x_ << ", " << y_ << ") clicked!" << std::endl;
#endif
}

ButtonNoPimpl& ButtonNoPimpl::setPos(int x, int y)
{
	x_ = x; y_ = y;
	return *this;
}

void ButtonNoPimpl::defaultOnClick()
{
}
