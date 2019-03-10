#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace simpleGame
{
	class Game
	{
	public:
		Game();
		int run();
		
	private:
		const int LARGEUR = 800;
		const int HAUTEUR = 480;

		bool init();

		void update();

		void draw();

		RenderWindow mainWin;
		Event event;
	};
}