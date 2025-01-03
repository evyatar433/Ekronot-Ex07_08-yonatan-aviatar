#pragma once
#include <vector>
#include "Piece.h"

class Piece;

class Manager
{
private:
	std::vector<std::vector<Piece*>> _board;
	int _turn;

	Piece* createPiece(const char piece, const int color);

public:
	Manager(const std::string& board);
	~Manager();

	std::string GetBoard() const;
	
	void SetBoard(const std::string& board);
};

