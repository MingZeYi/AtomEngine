#include <AtomEngine.h>

class Sandbox : public AtomEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

AtomEngine::Application* CreateApplication()
{
	return new Sandbox();
}