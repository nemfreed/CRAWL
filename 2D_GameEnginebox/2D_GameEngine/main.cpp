#include "Game.hpp"

Game* game = nullptr;

int main(int argc, char* argv[])
{

	game = new Game();

	game->init("RogueDarkEngine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

	while (game->running())
	{
		game->handleEvents();
		game->update();
		game->render();

	}

	game->clean();



	//while (game is running)
	//{
	//	handle any user input
	//	update all objects eg. positions etc.
	//	render changes to display
	//}



	//SDL_Init(SDL_INIT_EVERYTHING);
	//SDL_Window *window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	//SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	//SDL_SetRenderDrawColor(renderer, 0, 225, 0, 225);

	//SDL_RenderClear(renderer);

	//SDL_RenderPresent(renderer);

	//SDL_Delay(3000);
	return 0;
}