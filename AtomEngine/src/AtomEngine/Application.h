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

	//Ӧ���ڿͻ��˱�����
	Application* CreateApplication();

}

