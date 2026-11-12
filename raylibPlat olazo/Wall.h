#pragma once
#include "Tile.h"
class Wall:
	public Tile
{
private:
protected:
public:
	Wall(float x, float y, float size);
	~Wall();
	void Draw() const override;
};

