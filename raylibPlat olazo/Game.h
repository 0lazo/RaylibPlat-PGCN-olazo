#pragma once
#include <iostream>
#include <raylib.h>
<<<<<<< Updated upstream
=======
#include "Tile.h"
#include "Charactrer.h"
#include "Brick.h"
#include "Wall.h"
#include "Stairs.h"
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
	Tile* tile1 = new Tile(100, 100, 50);
	Character* player = new Character({ 10,10 }, 25);
=======
	Character* player = new Character({ 50,50 }, 25);
>>>>>>> Stashed changes

	std::vector<Tile*> map;

public:
	Game();
	~Game();

	void InitGame();
	void Update();
	void Draw();
	bool IsPlaying() { return WindowShouldClose(); }
};

