// #include <stdlib.h>
// #include <locale.h>
// #include <stdio.h>

// void main(){

//     setlocale(LC_ALL, "");
//     printf("�ɹ�ȡ������");
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

// MessageBox(NULL, TEXT("ϵͳ�رղ����ѳɹ�ȡ���������豸�����´���Ҫ����ʱ������ʾ"), TEXT("��ʾ"), MB_OKCANCEL | MB_ICONWARNING);

//      system("shutdown -a");

MessageBox(
        NULL, 
        TEXT("ϵͳ�رղ����ѳɹ�ȡ���������豸�����´���Ҫ����ʱ������ʾ"), 
        TEXT("��ʾ"), 
        MB_OK | MB_ICONWARNING  // ֻ��ʾ "ȷ��" ��ť�������о���ͼ��
    );
    system("shutdown -a");
return 0;

}