#include "Game.h"
#include "Tile.h"

Game::Game()
{
	InitWindow(screenWidth, screenHeight, "Plat");
	SetTargetFPS(30);
}

Game::~Game()
{
}

void Game::InitGame()
{
<<<<<<< Updated upstream
	ballPos = { (float)screenWidth / 2, (float)screenHeight / 2 };
=======
    ballPos = { (float)screenWidth / 2, (float)screenHeight / 2 };
	//bricks
>>>>>>> Stashed changes
	for (int i = 0; i < 25; i++)
	{
		map.push_back(new Brick(i * 25, 425, 25));
	}
	//walls
	//horizontales
	for (int i = 0; i < 77; i++)
	{
		map.push_back(new Wall(i * 25, 1055, 25));
	}
	for (int i = 0; i < 77; i++)
	{
		map.push_back(new Wall(i * 0, 25, 25));
	}
	//verticales
	for (int i = 0; i < 43; i++)
	{
		map.push_back(new Wall(0, i * 25, 25));
	}
	for (int i = 0; i < 43; i++)
	{
		map.push_back(new Wall( 1895, i * 25, 25));
	}
	//stairs
	for (int i = 0; i < 10; i++)
	{
		map.push_back(new Stairs(425 , (i * 5) + 350, 30));
	}
}

void Game::Update()
{
	player->Update();
}


void Game::Draw()
{
	BeginDrawing();
	{
		for (auto i : map)
		{
			player->Collision(*i);
			i->Draw();
		}
	}
<<<<<<< Updated upstream
	ClearBackground(PURPLE);
	DrawText("Ball Moving", 10, 10, 25, YELLOW);
	tile1->Draw();
=======
	ClearBackground(DARKBLUE);
>>>>>>> Stashed changes
	player->Draw();
	EndDrawing();
	
	
}