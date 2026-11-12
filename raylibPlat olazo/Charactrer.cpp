#include "Charactrer.h"
Character::Character(Vector2 pos, float s)
	: position(pos),size(s)
{
}

Character::~Character()
{
}

void Character::Update()
{
	velocity.y += gravity;
	if (IsKeyDown(KEY_A))
	{
		velocity.x = -moveSpeed;
		if (position.x < 30)
		{
			position.x = 30;
		}
	}
	else if (IsKeyReleased(KEY_A))
	{
		velocity.x = 0;
	}
	if (IsKeyDown(KEY_D))
	{
		velocity.x = moveSpeed;
		if (position.x > 745)
		{
			position.x = 745;
		}
	}
	else if (IsKeyReleased(KEY_D))
	{
		velocity.x = 0;
	}
	position.y += velocity.y;
	position.x += velocity.x;
}

void Character::Draw()
{
	DrawRectangle(position.x, position.y, size, size, BLACK);
}

void Character::Collision(Tile& t)
{
	Rectangle player = { position.x, position.y,size,size };
	if (CheckCollisionRecs(player, t.GetBoxCollider()))
	{
		position.y = t.GetPosition().y - 25;
		velocity.y = 0;
		isGrounded = true;
	}
}