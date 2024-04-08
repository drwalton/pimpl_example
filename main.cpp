#include "pimpl.hpp"
#include "nopimpl.hpp"
#include <iostream>

int main(int argc, char* argv[])
{
	ButtonNoPimpl button1;
	button1.onClick([]() {std::cout << "Button 1 clicked!" << std::endl; }).setPos(100,100);
	ButtonPimpl button2;
	button2.onClick([]() {std::cout << "Button 2 clicked!" << std::endl; }).setPos(200,100);

	button1.click();
	button2.click();
	
	return 0;
}

