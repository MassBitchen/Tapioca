#pragma once

#include "Core.h"

namespace Tapioca {

	class TAPIOCA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//�ͻ��˶���
	Application* CreateApplication();

}

