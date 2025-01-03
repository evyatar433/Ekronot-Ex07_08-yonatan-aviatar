#pragma once
#include <string>
#include "Piece.h"

class Queen : public Piece
{
public:
	Queen(const int color);
	~Queen();
	void Move(const Manager& board, const std::string& move) const;

};
