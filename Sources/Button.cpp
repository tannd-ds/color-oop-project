#include <iostream>
#include "../Headers/Button.h"

Button::Button() {
	this->text = "";
	this->imgSrc = "";
	this->textColor = Color(0, 0, 0);
	this->bgColor = Color(255, 255, 255);
}

Button::Button(std::string text,
			   std::string imgSrc, 
			   int x, int y, 
			   int height, int width, 
			   Color textColor, Color bgColor) : Element(x, y, height, width) {
	this->text = text;
	this->imgSrc = imgSrc;
	this->textColor = textColor;
	this->bgColor = bgColor;
}

void Button::setText(std::string text) {
	this->text = text;
}
void Button::setImgSrc(std::string imgSrc) {
	this->imgSrc = imgSrc;
}
void Button::setTextColor(Color textColor) {
	this->textColor = textColor;
}
void Button::setBgColor(Color bgColor) {
	this->bgColor = bgColor;
}

std::string Button::getText() {
	return this->text;
}
std::string Button::getImgSrc() {
	return this->imgSrc;
}
Color Button::getTextColor() {
	return this->textColor;
}
Color Button::getBgColor() {
	return this->bgColor;
}

bool Button::isMonochromatic() {
	return (this->getTextColor() == this->getBgColor());
}
bool Button::isComplementary() {
	return ((this->getBgColor() + this->getTextColor()) == Color(255, 255, 255));
}
bool Button::isAnalogous() {
	return false;
}
