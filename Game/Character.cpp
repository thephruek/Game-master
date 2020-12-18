#include "Character.h"
#include <SFML/Graphics.hpp>
#include <iostream>


Character::Character()
{
	Mover();
}


Character::~Character()
{
}

void Character::update(Time& elapsed)
{
	Mover::update(elapsed);
	coolDown.add(elapsed.asMilliseconds());
}