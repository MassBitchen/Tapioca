#include <Tapioca.h>

class Sandbox : public Tapioca::Application {
public:
	Sandbox() {

	}

	~Sandbox(){

	}
};

Tapioca::Application* Tapioca::CreateApplication() {
	return new Sandbox();
}