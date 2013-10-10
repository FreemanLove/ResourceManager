#ifndef RESOURCEMANAGER
#define RESOURCEMANAGER

#include <map>
using namespace std;

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class ResourceManager
{
public:
	sf::Font &getFont(string filename);
	void removeFont(string filename);
	sf::Texture &getTexture(string filename);
	void removeTexture(string filename);
	sf::SoundBuffer &getSoundBuffer(string filename);
	void removeSoundBuffer(string filename);
private:
	//No base class, no way to use templates afaik
	map<string, sf::Font> fonts_;
	map<string, sf::Texture> textures_;
	map<string, sf::SoundBuffer> sounds_;
};

#endif