#pragma once
#include <SFML/Graphics.hpp>


class Cell
{
public:
	Cell(sf::Vector2f worldPosition, sf::Vector2i gridPosition);
	~Cell();

	sf::Vector2f getWorldPosition();
	sf::Vector2i getGridPosition();
private:
	sf::Vector2f worldPosition;
	sf::Vector2i gridPosition;
};