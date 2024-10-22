// #include <stdlib.h>
// #include <locale.h>
// #include <stdio.h>

// void main(){

//     setlocale(LC_ALL, "");
//     printf("锟缴癸拷取锟斤拷锟斤拷锟斤拷");
//     system("shutdown -a");

//     getchar();
// }

#include <windows.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) //
int main() {
HWND hwnd;
hwnd=FindWindow( "ConsoleWindowClass", NULL);
if(hwnd){
ShowWindow(hwnd,SW_HIDE);
}

// MessageBox(NULL, TEXT("系统关闭操作已成功取消。您的设备将在下次需要更新时重新提示"), TEXT("提示"), MB_OKCANCEL | MB_ICONWARNING);

//      system("shutdown -a");

MessageBox(
        NULL, 
        TEXT("系统关闭操作已成功取消。您的设备将在下次需要更新时重新提示"), 
        TEXT("提示"), 
        MB_OK | MB_ICONWARNING  // 只显示 "确定" 按钮，并带有警告图标
    );
    system("shutdown -a");
return 0;

}