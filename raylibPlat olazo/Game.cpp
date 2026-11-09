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
	ballPos = { (float)screenWidth / 2, (float)screenHeight / 2 };
	for (int i = 0; i < 25; i++)
	{
		map.push_back(new Tile(i * 25, 425, 25));
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
	ClearBackground(PURPLE);
	DrawText("Ball Moving", 10, 10, 25, YELLOW);
	tile1->Draw();
	player->Draw();
	EndDrawing();
	
	
}