#pragma once

#ifdef AE_PLATFORM_WINDOWS

extern AtomEngine::Application* AtomEngine::CreateApplication();

int main(int argc, char** argv)
{
	printf("AtomEngine\n");
	auto app = AtomEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif