#pragma once

#include "Core.h"

namespace AtomEngine {

	class ATOMENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//应该在客户端被定义
	Application* CreateApplication();

}

