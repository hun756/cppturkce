### C++ 'da mesaj kutusu nasıl oluşturulur?

```cpp
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
```

Çıktı şu şekildedir : 

![Mesaj Kutusu](https://github.com/hun756/cppturkce/blob/main/resources/message_box.png)