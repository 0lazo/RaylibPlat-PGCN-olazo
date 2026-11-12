#pragma once
#include <iostream>
#include <raylib.h>
#include "Brick.h"
#include "Charactrer.h"
#include <vector>
#include "Wall.h"
#include "Stairs.h"
class Game
{
private:
	bool playing = true;
	const int screenWidth = 800;
	const int screenHeight = 600;
	Vector2 ballPos;
	std::vector<Tile*> map;
	Character* player;

public:
	Game();
	~Game();

	void InitGame();
	void Update();
	void Draw();
	bool IsPlaying() {return WindowShouldClose();}
};

