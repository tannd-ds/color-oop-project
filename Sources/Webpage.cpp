#include "../Headers/Webpage.h"

Webpage::Webpage() {
	nLabels = 0;
	nButtons = 0;
	labels = new Label[MAX_ELEMENTS];
	buttons = new Button[MAX_ELEMENTS];
}

Webpage::~Webpage() {
	delete[] labels;
	delete[] buttons;
}

void Webpage::addLabel(Label label) {
	labels[++nLabels] = label;
}

void Webpage::addButton(Button button) {
	buttons[++nButtons] = button;
}

void Webpage::removeElement(Element* element) {
}

void Webpage::removeElement(int index) {
}

void Webpage::removeAllElements() {
	delete[] labels;
	delete[] buttons;
}

bool Webpage::isMonochromatic() {
	return false;
}
