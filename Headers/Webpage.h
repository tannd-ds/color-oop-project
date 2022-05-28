#pragma once
#include "Element.h"
#include "Label.h"
#include "Button.h"
#pragma once
const int MAX_ELEMENTS = 100;

class Webpage {
protected:
	Label* labels;
	Button* buttons;

	int nLabels, nButtons;
public:
	Webpage();
	~Webpage();
	void addLabel(Label label);
	void addButton(Button button);
	void removeElement(Element* element);
	void removeElement(int index);
	void removeAllElements();

	bool isMonochromatic();
};
