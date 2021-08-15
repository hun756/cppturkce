#define UNICODE
#include <windows.h>
 
int WINAPI WinMain(
    HINSTANCE hInstance, 
    HINSTANCE hPrevInstance, 
    LPSTR lpCmdLine, 
    int nShowCmd
)
{
    MessageBox(
        NULL, 
        TEXT("Mesaj Kutusunun İçeriği"), 
        TEXT("Başlık"), 
        MB_OK
    );
    
    return 0;
}