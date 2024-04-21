#pragma once
#include "Application.h"


#ifdef GE_PLATFORM_WINDOWS

extern GEngine::Application* GEngine::CreateApplication();


int main(int argc, char* argv[])
{
	printf("Inside main\n");
	GEngine::Application* app = GEngine::CreateApplication();
	app->Run();
	delete app;



	return 0;
}

#endif