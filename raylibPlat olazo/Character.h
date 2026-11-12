#pragma once
#include "raylib.h"
#include "Tile.h"
#include <iostream>
class Character
{
private:
	Vector2 position;
	Vector2 velocity = { 0,0 };
<<<<<<< Updated upstream:raylibPlat olazo/Character.h
	float gravity = 1;
	const float moveSpeed = 6;
=======
	float gravity = 0.8f;
	const float moveSpeed = 8.5;
>>>>>>> Stashed changes:raylibPlat olazo/Charactrer.h
	const float jumpForce = -2;
	float size;
	bool isGrounded = false;
	bool isOnStairs = false;
public:
	Character(Vector2 pos, float s);
	~Character();

	void Update();
	void Draw();
<<<<<<< Updated upstream:raylibPlat olazo/Character.h
	void Collision(Tile& t);
};

=======
	void Collision(Tile & t);
};
>>>>>>> Stashed changes:raylibPlat olazo/Charactrer.h
