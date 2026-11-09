#pragma once
#include "raylib.h"
#include "Tile.h"
class Character
{
private:
	Vector2 position;
	Vector2 velocity;
	float gravity;
	const float moveSpeed = 5.0f;
	const float jumpForce = -2;
	float size;
public:
	Character(Vector2 pos, float s);
	~Character();

	void Update();
	void Draw();
	void Collision(Tile& t);
};

