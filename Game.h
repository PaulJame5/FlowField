#pragma once
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	void run();
	void render();
	void update(float deltaTime);


private:

	sf::RenderWindow window;
	sf::CircleShape circle;
	bool exitGame = false;
	float deltaTime = 0;

};