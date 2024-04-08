#pragma once
#include <functional>
#include <memory>

class ButtonPimpl
{
public:
	struct Impl;
	ButtonPimpl();
	virtual ~ButtonPimpl() noexcept;
	ButtonPimpl& onClick(const std::function<void()>& func);
	void click();
	ButtonPimpl& setPos(int x, int y);

private:
	std::unique_ptr<Impl> pimpl_;

};
