#include "Large_Tile.h"
#include <iostream>

Large_Tile::Large_Tile(int const x, int const y, sf::Texture const& tex)
	:Tile{x, y, tex}
{ }

void Large_Tile::set_pos(int const x, int const y)
{
	Tile::set_pos(x, y);
	sprite.setPosition(sf::Vector2f{static_cast<float>(x), static_cast<float>(y - 3 * 32 + 16)});
}
