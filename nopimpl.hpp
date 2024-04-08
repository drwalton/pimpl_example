#pragma once
#include <functional>

class ButtonNoPimpl
{
private:
	int x_, y_;
	std::function<void()> onClick_;

public:
	ButtonNoPimpl();
	virtual ~ButtonNoPimpl() noexcept;
	ButtonNoPimpl& onClick(const std::function<void()>& func);
	void click();
	ButtonNoPimpl& setPos(int x, int y);
	static void defaultOnClick();
};

