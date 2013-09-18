#include <iostream>
#include "SDL/SDL.h"
#include <string>
using namespace std;

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

/*The main function needs to initialize SDL subsystems,
load game settings, and take the user into the menu*/

int main(int argc, char* args[])
{
    if( SDL_Init(SDL_INIT_EVERYTHING) == -1 )
        return 1;
    
    
    
    return 0;
}