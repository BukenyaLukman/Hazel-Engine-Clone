#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined in the client

	//Hazel::Application* CreateAppication();
	Hazel::Application* CreateAppication();
}

