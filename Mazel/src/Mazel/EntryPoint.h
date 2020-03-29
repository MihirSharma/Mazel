#pragma once

#ifdef MZ_PLATFORM_WINDOWS

extern Mazel::Application* Mazel::CreateApplication();

int main(int argc, char** argv) {
	printf("Hazel Engine");
	auto app = Mazel::CreateApplication();
	app->Run();
	delete app;
}

#endif