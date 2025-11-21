#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <random>
#include <list>
#include "WordGame.hpp"
#include "BossFight.h"
#include "RhythmGame.h"
#include "WinePlayer.h"
#include "SwagBall.h"
#include "WineGame.h"
#include "ForgeGame.h"

using json = nlohmann::json;
using namespace sf;
using namespace std;
const int WIN_WIDTH = 1280;
const int WIN_HEIGHT = 720;

//player attributes
int Health = 85;
bool DashPowerUp = false;
float parryTime = 0.75f;
int baseAttack = 13;
float defense = 1.0f; //0 %
bool ShootPowerUp = false;

int main()
{
	RenderWindow window(VideoMode(WIN_WIDTH, WIN_HEIGHT), "Visual Novel");
	window.setFramerateLimit(30);
	Font newFont;
	newFont.loadFromFile("Fonts/norse/Norsebold.otf");

	while (window.isOpen()) {
		
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();}
			
		
		
	}



	return 0;
}

