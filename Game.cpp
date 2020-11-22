#include "Game.h"
#include <iostream>



Game::Game() : window{ sf::VideoMode(1920, 1080, 32), "AI Labs", sf::Style::Fullscreen }
{
	circle.setFillColor(sf::Color::Red);
	circle.setPosition(sf::Vector2f(0, 0));
	circle.setRadius(500);
}

Game::~Game()
{
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeAtEndOfPreviousFrame = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds((1.f / 60.0f));

	while (window.isOpen() && !exitGame)
	{
		deltaTime = clock.getElapsedTime().asSeconds() - timeAtEndOfPreviousFrame.asSeconds();

		if (clock.getElapsedTime() < timeAtEndOfPreviousFrame + timePerFrame)
		{
			render();
			continue;
		}

		update(deltaTime);
		timeAtEndOfPreviousFrame = clock.getElapsedTime();
		render();
	}
}

void Game::render()
{
	window.clear();
	window.draw(circle);
	window.display();
}

void Game::update(float deltaTime)
{
	// Update Here....
}

