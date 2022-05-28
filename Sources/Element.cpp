#include "../Headers/Element.h"

Element::Element() {
	this->posX = 0;
	this->posY = 0;
	this->width = 0;
	this->height = 0;
}

Element::Element(int x, int y, int height, int width) {
	this->posX = x;
	this->posY = y;
	this->height = height;
	this->width = width;
}

bool Element::isMonochromatic() {
	return false;
} 
