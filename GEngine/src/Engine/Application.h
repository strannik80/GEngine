#pragma once
#include "Core.h"

#include <stdio.h>

namespace GEngine {

	class GE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};


	Application* CreateApplication();

	

}
