#ifndef RESOURCEMANAGER
#define RESOURCEMANAGER

#include <map>
using namespace std;

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

namespace sfrm
{
	class ResourceManager
	{
	public:
		sf::Texture &getTexture(string filename);
		void removeTexture(string filename);
		sf::SoundBuffer &getSoundBuffer(string filename);
		void removeSoundBuffer(string filename);
	private:
		map<string, sf::Texture> textures_;
		map<string, sf::SoundBuffer> sounds_;
	};
}

#endif