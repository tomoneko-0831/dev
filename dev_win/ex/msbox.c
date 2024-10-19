#include <windows.h>            //Windowsアプリケーションに必要なライブラリ. 

int WINAPI wWinMain( 
    HINSTANCE hInstance,        //Windowsのシステムがアプリケーションを識別するための識別値が入る型. 現在のアプリケーションの識別値が入る. 
    HINSTANCE hPrevInstance,    //16bit Windowsのために設けられた引数. 32bit以上のWindowsではNULL. 
    LPWSTR lpCmdLine,            //コマンドライン引数. 
    int nCmdShow                //ウィンドウの表示状態を表す整数値. 
    ) {
        MessageBoxW(NULL, L"Kitty on your lap", L"メッセージです", MB_OK);
        return 0;
    }
