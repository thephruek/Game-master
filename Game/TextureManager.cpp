#include "TextureManager.h"
#include <SFML/Graphics.hpp>
#include <iostream>

TextureManager::TextureManager()
{
}

void TextureManager::add(string key, string filePath)
{
	Texture tex;
	tex.loadFromFile(filePath);
	texMap[key] = tex;
}

Texture* TextureManager::get(string key)
{
	return &texMap[key];
}

void TextureManager::erase(string key)
{
	texMap.erase(key);
}