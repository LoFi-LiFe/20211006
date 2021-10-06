#include <iostream>
#include "Engine.h"
#include "Actor.h"
#include <vector> //STL

using namespace std;

int main()
{
	Engine* engine = new Engine();

	(*engine).SpawnActor();
	 //Wall, Player, Goal(Object)
	engine->SpawnActor();

//	engine->DestroyActor(0);

	engine->Run();

	delete engine;

	return 0;
}