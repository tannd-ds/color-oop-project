#pragma once

class Color {
protected:
	int r, g, b;
	
public:
	static Color RED, ORANGE, YELLOW, SPRING_GREEN,
				 GREEN, TURQUOISE, CYAN, OCEAN,
				 BLUE, VIOLET, MAGENTA, RASPBERRY;

	Color();
	Color(int r, int g, int b);

	int getR();
	int getG();
	int getB();

	void setR(int r);
	void setG(int g);
	void setB(int b);

	friend Color operator+(Color c1, Color c2);
	friend bool operator==(Color c1, Color c2);
};
