#include "Game.h"
#include "Charactrer.h"

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
	player = new Character({ 100, 100 }, 25);
	//Bottom Wall
	for (int i = 0; i < 35; i++)
	{
		map.push_back(new Wall(i * 25, 575, 25));
	}
	//Left Wall
	for (int i = 0; i < 25; i++)
	{
		map.push_back(new Wall(0, i * 25, 25));
	}
	//Right Wall
	for (int i = 0; i < 25; i++)
	{
		map.push_back(new Wall(775, i * 25, 25));
	}
	//Top Wall
	for (int i = 0; i < 35; i++)
	{
		map.push_back(new Wall(i * 25, 0, 25));
	}
	//Bricks
	for (int i = 1; i < 17; i++)
	{
		map.push_back(new Brick(i * 25, 450, 25));
	}
	for (int i = 18; i < 27; i++)
	{
		map.push_back(new Brick(i * 25, 450, 25));
	}
	for (int i = 15; i < 31; i++)
	{
		map.push_back(new Brick(i * 25, 350, 25));
	}
	for (int i = 1; i < 6; i++)
	{
		map.push_back(new Brick(i * 25, 250, 25));
	}
	for (int i = 7; i < 19; i++)
	{
		map.push_back(new Brick(i * 25, 250, 25));
	}
	for (int i = 1; i < 14; i++)
	{
		map.push_back(new Brick(i * 25, 150, 25));
	}
	for (int i = 15; i < 31; i++)
	{
		map.push_back(new Brick(i * 25, 150, 25));
	}
	//Stairs
	for (int i = 0; i < 8; i++)
	{
		map.push_back(new Stairs(425,(i*25)+450, 25));
	}
}


void Game::Update()
{
	if (IsKeyDown(KEY_RIGHT)) ballPos.x += 2;
	if (IsKeyDown(KEY_LEFT)) ballPos.x -= 2;
	if (IsKeyDown(KEY_UP)) ballPos.y -= 2;
	if (IsKeyDown(KEY_DOWN)) ballPos.y += 2;
}

void Game::Draw()
{
	BeginDrawing();
	player->Update();
	player->Draw();
	for (auto i : map)
	{
		player->Collision(*i);
		i->Draw();
	}
	ClearBackground(DARKBLUE);
	DrawText("Ball Moving", 10, 10, 25, BLACK);
	player->Draw();
	EndDrawing();
}
