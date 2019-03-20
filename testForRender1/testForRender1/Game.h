#pragma once
//author callum lynch

#include <SFML/Graphics.hpp>
#include <iostream>
#include "LevelMap.h"


class Game
{
public:





	Game();
	~Game();



	void run();




private:
	const static int mapSize{ 8 };


	void processEvents();
	void update(sf::Time dt);
	void render();
	
	void initSprites();

	void loadmap1();



	sf::RenderWindow m_window;
	sf::Texture grassTex;
	sf::Sprite grassSprite;

	sf::Texture startTex;
	sf::Sprite startSprite;

	sf::Texture roadTex;
	sf::Sprite RoadSprite;


};