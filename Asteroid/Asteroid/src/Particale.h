#pragma once

#include "Sprite.h"

class Particle
{
public:
	//Initialize position and animation
	Particle(float x, float y, int side, float angle, SDL_Renderer* renderer);

	Particle(float x, float y, int side, SDL_Renderer* renderer);
	
	//Shows the particle
	void render();
	//Checks if particle is dead
	bool isDead() const { return dead; }
	void setdead(bool dead);
	void setAlfa(Uint8 alpha);

	//Offsets
	float x, y;
	
	float dx, dy;
private:

	//Current frame of animation
	int Frame;

	//Type of particle
	Sprite* Texture;

	bool dead;
};

