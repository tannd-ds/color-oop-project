#define OLC_PGE_APPLICATION
#include <iostream>
#include "Headers/Color.h"
#include "Headers/Element.h"
#include "Headers/Label.h"
#include "Headers/Button.h"
#include "Headers/Webpage.h"
#include "Headers/olcPixelGameEngine.h" 


class Game : public olc::PixelGameEngine
{
public:
	Game() {
		sAppName = "Color Game";
	}

public:
	bool OnUserCreate() override {

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override {

		return true;
	}
};

int main() {
	/*
	Game demo;
	if (demo.Construct(512, 480, 2, 2))
		demo.Start();
	*/


	Label label("NO", 0, 0, 25, 50, Color::RED, Color::CYAN);
	Element* p = new Button("NO", "", 0, 0, 25, 50, Color::RED, Color::BLUE);

	std::cout << label.isMonochromatic() << " " << label.isComplementary();
	
	return 0;
}
