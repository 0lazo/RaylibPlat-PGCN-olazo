#include "Tile.h"
Tile::Tile(float x, float y, float size)
{
	boxCollider = { x,y,size,size };
	this->position.x = x;
	this->position.y = y;
	this->size = size;
	this->timer = 0;
}
Tile::~Tile()
{
}
void Tile::Update(float DT)
{
}