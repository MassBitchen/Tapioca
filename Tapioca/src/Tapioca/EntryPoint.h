#pragma once

#ifdef TC_PLATFORM_WINDOWS

extern Tapioca::Application* Tapioca::CreateApplication();

int main(int argc, char** argv){
	auto app = Tapioca::CreateApplication();
	app->Run();
	delete app;
}

#endif // TC_PLATFORM_WINDOWS
