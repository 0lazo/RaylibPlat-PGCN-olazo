#include "Character.h"
Character::Character(Vector2 pos, float s)
	: position(pos), size(s)
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
	velocity.y += gravity;
	if (IsKeyDown(KEY_A))
	{
		velocity.x = -moveSpeed;
	}
	else if (IsKeyReleased(KEY_A) > 0)
	{
		velocity.x = 0;
	}
	if (IsKeyDown(KEY_D))
	{
		velocity.x = +moveSpeed;
	}
	else if (IsKeyReleased(KEY_D) > 0)
	{
		velocity.x = 0;
	}
	// if (IsKeyDown(KEY_W)) 
	//	position.y = -moveSpeed;
	////else if (IsKeyReleased(KEY_W))
	////	position.x = 0;
	//if (IsKeyDown(KEY_S)) 
	//	position.y = moveSpeed;
	///*else if (IsKeyReleased(KEY_S)) 
	//	position.x = 0;*/
	position.x += velocity.x;
<<<<<<< Updated upstream:raylibPlat olazo/Character.cpp
	position.y += velocity.y;
=======
}

void Character::Draw()
{
	DrawRectangle(position.x, position.y, size, size, GRAY);
>>>>>>> Stashed changes:raylibPlat olazo/Charactrer.cpp
}

void Character::Collision(Tile& t)
{
<<<<<<< Updated upstream:raylibPlat olazo/Character.cpp
	Rectangle collider = { position.x, position.y, size, size
	};
	if (CheckCollisionRecs(collider, t.getBoxCollider()))
	{
		position.y = t.getBoxCollider().y - size;
		velocity.y = 0;
		isGrounded = true;
=======
	Rectangle collider = { position.x, position.y,size,size };
	switch (t.GetType())
	{

	case TileType::brick:
		if (CheckCollisionRecs(collider, t.getBoxCollider()))
		{
			position.y = t.GetPosition().y - 25;
			velocity.y = 0;
			isGrounded = true;
		}
		break;
	case TileType::wall:
		if (CheckCollisionRecs(collider, t.getBoxCollider()))
		{
			if (velocity.x > 0)
			{
				position.x = t.GetPosition().x - 25;
				velocity.x = 0;
				isGrounded = true;
			}
			if (velocity.x < 0)
			{
				position.x = t.GetPosition().x + 25;
				velocity.x = 0;
				isGrounded = true;
			}
			if (velocity.y > 0)
			{
				position.y = t.GetPosition().y - 25;
				velocity.y = 0;
				isGrounded = true;
			}
		}
		break;
	case TileType::stairs:
		if (CheckCollisionRecs(collider, t.getBoxCollider()))
		{
			position.y = t.GetPosition().y - 25;
			velocity.y = 0;
			isGrounded = true;
			/*if (position.y >= (t.GetPosition().y + size) && (position.x >= t.GetPosition().x+ size) &&
				position.y <= t.GetPosition().y + size && position.x <= t.GetPosition().x)
			{
				if (IsKeyDown(KEY_W))
				{
					position.y -= 1;
					std::cout << velocity.y << std::endl;
				}
			}*/
		}
		break;
>>>>>>> Stashed changes:raylibPlat olazo/Charactrer.cpp
	}

}