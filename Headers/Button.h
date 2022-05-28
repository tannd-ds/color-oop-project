#pragma once
#include "Element.h"
#include "Color.h"

class Button : public Element {
protected:
	std::string text;
	std::string imgSrc;
	Color textColor;
	Color bgColor;
	
public:
	Button();
	Button(std::string text, std::string imgSrc, int x, int y, int height, int width, Color textColor, Color bgColor);
	void setText(std::string text);
	void setImgSrc(std::string imgSrc);
	void setTextColor(Color textColor);
	void setBgColor(Color bgColor);

	std::string getText();
	std::string getImgSrc();
	Color getTextColor();
	Color getBgColor();

	bool isMonochromatic();
	bool isComplementary();
	bool isAnalogous();
};
