#pragma once
#include "raylib.h"
enum class TileType {
	brick,
	wall,
	stairs
};
class Tile
{
private:
protected:
	TileType type;
	Vector2 position;
	float size;
	bool isActive = true;
	Rectangle boxCollider;
	float timer;
<<<<<<< Updated upstream
=======
	void SetType(TileType t) { type = t; }

>>>>>>> Stashed changes
public:
	Tile(float x, float y, float size);
	~Tile();
	TileType GetType() {return type;}
	void Update(float DT);
	//es virtual para poder sobreescribirla con los hijos
	virtual void Draw() const = 0;
	void SetIsActive(bool active) { isActive = active; }
	Vector2 GetPosition();
	Rectangle getBoxCollider();

};

