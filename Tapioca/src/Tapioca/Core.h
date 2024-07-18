#pragma once

#ifdef TC_PLATFORM_WINDOWS

	#ifdef TC_BUILD_DLL
		#define TAPIOCA_API __declspec(dllexport)
	#else
		#define TAPIOCA_API __declspec(dllimport)
	#endif
#else
	#error Tapioca only support Windows!
#endif // TC_PLARFORM_WINDOWS
