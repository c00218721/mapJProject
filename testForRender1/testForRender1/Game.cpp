#include "Game.h"



Game::Game()
	: m_window{sf::VideoMode(800,800), "racing game"}
{
	initSprites();
	loadmap1();
}

Game::~Game()
{

}

void Game::run()
{
	sf::Clock clock;

	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	sf::Time timePerFrame = sf::seconds(1.f / 60.f);

	while (m_window.isOpen())
	{
		{
			timeSinceLastUpdate += clock.restart();
			while (timeSinceLastUpdate > timePerFrame)
			{
				timeSinceLastUpdate -= timePerFrame;
				processEvents();
				update(timePerFrame);
			}
			render();
		}
	}
	
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			m_window.close();
		}
	}
}

void Game::update(sf::Time dt)
{
}

void Game::render()
{
	m_window.clear(sf::Color::Black);


	m_window.display();
}

void Game::initSprites()
{
	if (!roadTex.loadFromFile("road.PNG"))
	{
		std::cout << "error loading road png" << std::endl;
	}

	if (!grassTex.loadFromFile("grass.PNG"))
	{
		std::cout << "error loading grass png" << std::endl;
	}

	if (!startTex.loadFromFile("start.PNG"))
	{
		std::cout << "error loading start png" << std::endl;
	}

	RoadSprite.setTexture(roadTex);
	grassSprite.setTexture(grassTex);
	startSprite.setTexture(startTex);

}

void Game::loadmap1()
{
	for (int i = mapSize - 1; i >= 0; i--)
	{
		for (int j = mapSize - 1; j >= 0; j--)
		{
			if (level1[i][j] == 0)
			{
				level1[i][j]
			}
			else if (level1[i][j] == 1)
			{
				//set texture start
			}
			else if (level1[i][j])
			{
				//set texture road
			}
		}
	}
}
