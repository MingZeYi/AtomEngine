#pragma once

#ifdef AE_PLATFORM_WINDOWS
	#ifdef AE_BUILD_DLL
		#define ATOMENGINE_API __declspec(dllexport)
	#else
		#define ATOMENGINE_API __declspec(dllimport)
	#endif
#else
	#error AtomEngine only support Windows!
#endif
