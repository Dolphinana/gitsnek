#pragma once
#include "Graphics.h"
#include "Location.h"

class Board
{

public:
	Board(Graphics& gfx);
	void DrawCell( const Location& loc, Color c);
	int GetGridDimension() const;
	int GetGridWidth() const;
	int GetGridHeight() const;
private:
	static constexpr int dimension = 20;
	static constexpr int width = 10;
	static constexpr int height = 10;
	Graphics& gfx;
};
