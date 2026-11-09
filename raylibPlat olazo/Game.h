#pragma once
#include <iostream>
#include <raylib.h>
#include "Tile.h"
#include "Charactrer.h"
#include <vector>
class Game
{
private:
	bool playing = true;
	const int screenWidth = 800;
	const int screenHeight = 600;
	Vector2 ballPos;
	Tile* tile = new Tile(10, 10, 25);
	Character* player = new Character({ 50,50 }, 25);

	std::vector<Tile*> map;

public:
	Game();
	~Game();

	void InitGame();
	void Update();
	void Draw();
	bool IsPlaying() {return WindowShouldClose();}
};

