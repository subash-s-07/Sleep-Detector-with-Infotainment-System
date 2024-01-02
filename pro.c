#include "windows.h"

#include "vfw.h"

//#include <cstdio.h>

#pragma comment(lib, "Vfw32.lib")

// ********************************** //
int main()
{

  // create the preview window
  HWND hCam = capCreateCaptureWindow (
   L"hoven",
   WS_CHILD,
   0, 0, 0, 0,
   GetDesktopWindow(), 0);

  // connect to the first camera
  // for other cameras try index
  // 1, 2, in place of the 0 below
  if(capDriverConnect(hCam, 0))
  {

    capFileSaveDIB(hCam, L"shot.bmp");

    // the screenshot is in the current
    // directory, usually the same
    // where the exe is created by
    // your compiler
    printf("Saved as shot.bmp!");

  }

  else
  {

    printf("Check camera?");

  }

  DestroyWindow(hCam);

  return 0;

}
