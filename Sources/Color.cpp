#include "../Headers/Color.h"

Color Color::RED = Color(255, 0, 0);
Color Color::ORANGE = Color(255, 125, 0);
Color Color::YELLOW = Color(255, 255, 0);
Color Color::SPRING_GREEN = Color(125, 255, 0);
Color Color::GREEN = Color(0, 255, 0);
Color Color::TURQUOISE = Color(0, 255, 125);
Color Color::CYAN = Color(0, 255, 255);
Color Color::OCEAN = Color(0, 125, 255);
Color Color::BLUE = Color(0, 0, 255);
Color Color::VIOLET = Color(125, 0, 255);
Color Color::MAGENTA = Color(255, 0, 255);
Color Color::RASPBERRY = Color(255, 0, 125);

Color::Color() {
	this->r = 0;
	this->b = 0;
	this->g = 0;
}

Color::Color(int r, int b, int g) {
	this->r = r;
	this->b = b;
	this->g = g;
}

int Color::getR() {
	return this->r;
}
int Color::getG() {
	return this->g;
}
int Color::getB() {
	return this->b;
}

void Color::setR(int r) {
	this->r = r;
}
void Color::setG(int g) {
	this->g = g;
}
void Color::setB(int b) {
	this->b = b;
}

Color operator+(Color c1, Color c2) {
	return Color(c1.getR() + c2.getR(), c1.getG() + c2.getG(), c1.getB() + c2.getB());
}

bool operator==(Color c1, Color c2) {
	return (c1.getR() == c2.getR() && c1.getG() == c2.getG() && c1.getB() == c2.getB());
}
