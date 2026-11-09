#pragma once
#include <iostream>
#include <raylib.h>
#include <vector>
#include "Tile.h"
#include "Character.h"
class Game
{
private:
	bool playing = true;
	const int screenWidth = 800;
	const int screenHeight = 600;
	Vector2 ballPos;
	Tile* tile1 = new Tile(100, 100, 50);
	Character* player = new Character({ 10,10 }, 25);

	std::vector<Tile*> map;

public:
	Game();
	~Game();

	void InitGame();
	void Update();
	void Draw();
	bool IsPlaying() { return WindowShouldClose(); }
};

