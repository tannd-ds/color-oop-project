#include <iostream>
#include "../Headers/Color.h"
#include "../Headers/Label.h"

Label::Label() {
	this->text = "";
	this->textColor = Color(0, 0, 0);
	this->bgColor = Color(255, 255, 255);
}

Label::Label(std::string text, int x, int y, int width, int height, Color textColor, Color bgColor) {
	this->text = text;
	this->posX = x;
	this->posY = y;
	this->width = width;
	this->height = height;
	this->textColor = textColor;
	this->bgColor = bgColor;
}

void Label::setText(std::string text) {
	this->text = text;
}
void Label::setTextColor(Color textColor) {
	this->textColor = textColor;
}
void Label::setBgColor(Color bgColor) {
	this->bgColor = bgColor;
}

std::string Label::getText() {
	return this->text;
}
Color Label::getTextColor() {
	return this->textColor;
}
Color Label::getBgColor() {
	return this->bgColor;
}

bool Label::isMonochromatic() {
	return (this->getTextColor() == this->getBgColor());
}
bool Label::isComplementary() {
	return ((this->getBgColor() + this->getTextColor()) == Color(255, 255, 255));
}
bool Label::isAnalogous() {
	return false;
}

