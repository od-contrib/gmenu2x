#include "buttonbox.h"

#include "gmenu2x.h"
#include "iconbutton.h"

using std::unique_ptr;
using std::move;

void ButtonBox::add(unique_ptr<IconButton> button)
{
	buttons.push_back(move(button));
}

void ButtonBox::clear()
{
	buttons.clear();
}

void ButtonBox::paint(Surface& s, int x, int y)
{
	for (auto& button : buttons) {
		auto rect = button->getRect();
		button->setPosition(x, y - rect.h / 2);
		button->paint(s);
        //space 20% of current button between next button
		x += button->getRect().w * 1.20;
	}
}
