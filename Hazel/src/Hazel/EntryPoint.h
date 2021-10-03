#pragma once



#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateAppication();



int main(int argc, char** argv) {
	
	auto app = Hazel::CreateAppication();
	app->Run();
	delete app;
}
#endif // HZ_PLATFORM_WINDOWS
