#pragma once
#include "Sprite.h"

class Ship : public Sprite
{
public:
	Ship();
	Ship(const char* path, int width, int height, SDL_Renderer* renderer) : Sprite(path, width, height, renderer) {}
	~Ship(){}
	void PoolEvent(SDL_Event event);

private:
};