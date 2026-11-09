#include "Character.h"
Character::Character(Vector2 pos, float s)
	: position(pos),size(s)
{
}

Character::~Character()
{
}

void Character::Draw()
{
	DrawRectangle(position.x, position.y, size, size, BLUE);
}

void Character::Update()
{

}

void Character::Collision(Tile& t)
{
}