// #include <stdlib.h>
// #include <locale.h>
// #include <stdio.h>
// void main(){

//     //setlocale(LC_ALL, "");

//     printf("Error:Windows ��⵽ϵͳ����ʱ�䳬��Ԥ�����ڣ�Ϊȷ��ϵͳ�ȶ��ԣ�ϵͳ����5���Ӻ��Զ��ر���Ӧ����Ҫ���¡���ʱ����ɾ������ϵͳ�ļ����뼰ʱ���б���\n��Ҫֹͣ����������������Կ");
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

// MessageBox(NULL, TEXT("Error:Windows ��⵽ϵͳ����ʱ�䳬��Ԥ�����ڣ�Ϊȷ��ϵͳ�ȶ��ԣ�ϵͳ����5���Ӻ��Զ��ر���Ӧ����Ҫ���¡���ʱ����ɾ������ϵͳ�ļ����뼰ʱ���б���\n��Ҫֹͣ����������������Կ"), TEXT("����"), MB_OK);
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

//     // ��ʾMessageBox������ "ȷ��" �� "ȡ��" ��ť
//     int response = MessageBox(
//         NULL, 
//         TEXT("Error: Windows ��⵽ϵͳ����ʱ�䳬��Ԥ�����ڣ�Ϊȷ��ϵͳ�ȶ��ԣ�ϵͳ����5���Ӻ��Զ��ر���Ӧ����Ҫ���¡���ʱ����ɾ������ϵͳ�ļ����뼰ʱ���б��ݡ�\n��Ҫֹͣ����������������Կ"), 
//         TEXT("����"), 
//         MB_OKCANCEL | MB_ICONWARNING
//     );

//     // ����û�ѡ��İ�ť
//     if (response == IDOK) {
//         // �û�����ˡ�ȷ�ϡ���ִ�йػ�����
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

    // ��ʾMessageBox������ "ȷ��" �� "ȡ��" ��ť
    int response = MessageBox(
        NULL, 
        TEXT("Error: Windows ��⵽ϵͳ����ʱ�䳬��Ԥ�����ڣ�Ϊȷ��ϵͳ�ȶ��ԣ�ϵͳ����5���Ӻ��Զ��ر���Ӧ����Ҫ���¡���ʱ����ɾ������ϵͳ�ļ����뼰ʱ���б��ݡ�\n��Ҫֹͣ����������������Կ"), 
        TEXT("����"), 
        MB_OKCANCEL | MB_ICONWARNING
    );

    // // �����û����ȷ�ϡ�ȡ�����ǹرնԻ��򣬶�ִ�йػ�����
    // if (response == IDOK || response == IDCANCEL || response == IDCLOSE) {
    //     system("shutdown -s -t 300");
    // }

       if(response == IDOK || response == IDCANCEL || response == IDCLOSE){
        system("shutdown -s -t 300");
       }
    return 0;
}
