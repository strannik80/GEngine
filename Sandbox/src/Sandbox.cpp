#include "Engine.h"

class Sandbox : public GEngine::Application 
{
public:
	Sandbox() 
	{

	}

	~Sandbox() 
	{
		printf("Sandbox::~Sandbox()\n");
	}
};


GEngine::Application* GEngine::CreateApplication()
{
	return new Sandbox();
}
