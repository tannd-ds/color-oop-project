#pragma once
#include "Element.h"
#include "Color.h"

class Label : public Element {
protected:
	std::string text;
	Color textColor;
	Color bgColor;
public:
	Label();
	Label(std::string text, int x, int y, int width, int height, Color textColor, Color bgColor);

	void setText(std::string text);
	void setTextColor(Color textColor);
	void setBgColor(Color bgColor);

	std::string getText();
	Color getTextColor();
	Color getBgColor();

	bool isMonochromatic();
	bool isComplementary();
	bool isAnalogous();
};