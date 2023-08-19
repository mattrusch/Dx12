// Application.h

#pragma once

#include "Window.h"

namespace Vnm
{
    class Device;
    class Application
    {
    public:
        Application() = default;
        ~Application() = default;

        void Startup(HINSTANCE instance, int cmdShow);
        void Mainloop();
        void Shutdown();

    private:
        Window mWindow;
    };
}
