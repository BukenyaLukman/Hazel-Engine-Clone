#include "..\..\Hazel\src\Hazel\Application.h"
#include <Hazel.h>

class SandBox : public Hazel::Application
{
public:
	SandBox() {

	}
	~SandBox()
	{

	}
};

//int main() {
//	SandBox* sandBox = new SandBox();
//	sandBox->Run();
//	delete sandBox;
//}

Hazel::Application* Hazel::CreateAppication() {
	return new SandBox();
}