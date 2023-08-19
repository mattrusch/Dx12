// Application.cpp

#include "Application.h"
#include "D3d12Context.h"

namespace Vnm
{
    void Application::Startup( HINSTANCE instance, int cmdShow )
    {
        // Create main window and device
        Window::WindowDesc winDesc;
        winDesc.mWidth = 1024;
        winDesc.mHeight = 1024;
        mWindow.Create( instance, cmdShow, Vnm::Window::WindowDesc() );

        Init( mWindow.GetHandle() );
    }

    void Application::Mainloop()
    {
        static uint32_t lastTime = GetTickCount();
        uint32_t elapsedTime = GetTickCount() - lastTime;
        lastTime = GetTickCount();
        float elapsedSeconds = static_cast<float>(elapsedTime) * 0.001f;

        Update(elapsedSeconds);
        Render();
    }

    void Application::Shutdown()
    {
        mWindow.Destroy();
    }
}
