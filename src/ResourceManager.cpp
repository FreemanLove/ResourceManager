#include "ResourceManager/ResourceManager.h"

sf::Font &ResourceManager::getFont(string filename)
{
	auto it=fonts_.find(filename);
	if(it!=fonts_.end())
	{
		return it->second;
	}
	else
	{
		sf::Font font;
		if(font.loadFromFile(filename))
		{
			fonts_.insert(pair<string, sf::Font>(filename, font));
		}
		return fonts_[filename];
	}	
}

void ResourceManager::removeFont(string filename)
{
	fonts_.erase(filename);
}

sf::Texture &ResourceManager::getTexture(string filename)
{
	auto it=textures_.find(filename);
	if(it!=textures_.end())
	{
		return it->second;
	}
	else
	{
		sf::Texture texture;
		if(texture.loadFromFile(filename))
		{
			textures_.insert(pair<string, sf::Texture>(filename, texture));
		}
		return textures_[filename];
	}	
}

void ResourceManager::removeTexture(string filename)
{
	textures_.erase(filename);
}
	
sf::SoundBuffer &ResourceManager::getSoundBuffer(string filename)
{
	auto it=sounds_.find(filename);
	if(it!=sounds_.end())
	{
		return it->second;
	}
	else
	{
		sf::SoundBuffer sound;
		if(sound.loadFromFile(filename))
		{
			sounds_.insert(pair<string, sf::SoundBuffer>(filename, sound));
		}
		return sounds_[filename];
	}	
}

void ResourceManager::removeSoundBuffer(string filename)
{
	sounds_.erase(filename);
}