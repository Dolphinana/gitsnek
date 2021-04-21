#include "Board.h"
#include "Assert.h"

Board::Board(Graphics & gfx)
	:
	gfx( gfx )
{
}

void Board::DrawCell(const Location & loc, Color c)
{
	assert(loc.x >= 0);
	assert(loc.x < loc.x + width);
	assert(loc.y >= 0);
	assert(loc.y < loc.y + height);
	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}

int Board::GetGridDimension() const
{
	return dimension;
}

int Board::GetGridWidth() const
{
	return width;
}

int Board::GetGridHeight() const
{
	return height;
}
