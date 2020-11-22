#include "Cell.h"

Cell::Cell(sf::Vector2f worldPosition, sf::Vector2i gridPosition)
{
	this->worldPosition = worldPosition;
	this->gridPosition = gridPosition;
}

Cell::~Cell()
{
}

sf::Vector2f Cell::getWorldPosition()
{
	return worldPosition;
}

sf::Vector2i Cell::getGridPosition()
{
	return gridPosition;
}
