// GDIFuck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

typedef struct IUnknown IUnknown;

#include <windows.h>

void missingAroundWithPlgBlt() {
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        DeleteObject(obj);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadCursor(NULL, IDC_ARROW));
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadCursor(NULL, IDC_ARROW));
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadIcon(NULL, IDI_WARNING));
        BitBlt(hDC, o1, rand() % 3, rct.right, rct.bottom, hDC, o1, 0, SRCCOPY);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadCursor(NULL, IDC_ARROW));
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadIcon(NULL, IDI_WARNING));
        BitBlt(hDC, o1, rand() % 3, rct.right, rct.bottom, hDC, o1, 0, SRCCOPY);
        BitBlt(hDC, rand() % 100, o2, rct.right, rct.bottom, hDC, 0, o2, SRCCOPY);
        PatBlt(hDC, 0, 0, rct.right, rct.bottom, PATINVERT);
        BitBlt(hDC, rct.left + rand() % 2 + -2, rct.top + rand() % 2 + -2, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 0; i < 200; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadCursor(NULL, IDC_ARROW));
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadIcon(NULL, IDI_WARNING));
        BitBlt(hDC, o1, rand() % 3, rct.right, rct.bottom, hDC, o1, 0, SRCCOPY);
        BitBlt(hDC, rand() % 100, o2, rct.right, rct.bottom, hDC, 0, o2, SRCCOPY);
        PatBlt(hDC, 0, 0, rct.right, rct.bottom, PATINVERT);
        BitBlt(hDC, rct.left + rand() % 2 + -2, rct.top + rand() % 2 + -2, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        StretchBlt(hDC, rct.left + 20, rct.top + 20, rct.right - 40, rct.bottom - 40, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        DeleteObject(obj);
        PlgBlt(hDC, p1, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
    for (int i = 1; i > 0; i++) {
        HWND hWnd = GetDesktopWindow();
        HDC hDC = GetWindowDC(hWnd);
        RECT rct;
        POINT p[3];
        POINT p1[3];
        POINT p2[3];

        GetWindowRect(hWnd, &rct);

        p[0].x = rct.left - rand() % 15 + -20;
        p[0].y = rct.top + rand() % 10 + -20;
        p[1].x = rct.right + rand() % 50;
        p[1].y = rct.top + rand() % 5 + -20;
        p[2].x = rct.left - rand() % -10 + -20;
        p[2].y = rct.bottom + 20;

        int l = rand() % 20;
        int l1 = rand() % 5;

        p1[0].x = rct.left - l;
        p1[0].y = rct.top + l1;
        p1[1].x = rct.right + l;
        p1[1].y = rct.top + l1;
        p1[2].x = rct.left - l;
        p1[2].y = rct.bottom - l1;

        int o = rand() % 5 + -20;
        int o1 = rand() % rct.right;
        int o2 = rand() % rct.bottom;

        p2[0].x = rct.left + rand() % 50;
        p2[0].y = rct.top + rand() % 50;
        p2[1].x = rct.right - rand() % 50;
        p2[1].y = rct.top - rand() % 50;
        p2[2].x = rct.left + rand() % 50;
        p2[2].y = rct.bottom + rand() % 50;

        HGDIOBJ obj = SelectObject(hDC, CreateSolidBrush(RGB(rand() % 128, rand() % 128, rand() % 128)));
        StretchBlt(hDC, rct.left - 5, rct.top, rct.right + 10, rct.bottom, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        PlgBlt(hDC, p, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        BitBlt(hDC, rand() % rct.right, rand() % rct.bottom, rand() % 800, rand() % 600, hDC, rand() % rct.right, rand() % rct.bottom, SRCCOPY);
        BitBlt(hDC, 0, rand() % 3 + -1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadCursor(NULL, IDC_ARROW));
        DrawIcon(hDC, rand() % rct.right, rand() % rct.bottom, LoadIcon(NULL, IDI_WARNING));
        BitBlt(hDC, o1, rand() % 3, rct.right, rct.bottom, hDC, o1, 0, SRCCOPY);
        BitBlt(hDC, rand() % 100, o2, rct.right, rct.bottom, hDC, 0, o2, SRCCOPY);
        PatBlt(hDC, 0, 0, rct.right, rct.bottom, PATINVERT);
        BitBlt(hDC, rct.left + rand() % 2 + -2, rct.top + rand() % 2 + -2, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        StretchBlt(hDC, rct.left + 20, rct.top + 20, rct.right - 40, rct.bottom - 40, hDC, 0, 0, rct.right, rct.bottom, SRCCOPY);
        DeleteObject(obj);
        PlgBlt(hDC, p1, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        PlgBlt(hDC, p2, hDC, 0, 0, rct.right, rct.bottom, NULL, 0, 0);
        BitBlt(hDC, rct.left, rct.top - 1, rct.right, rct.bottom, hDC, 0, 0, SRCCOPY);
        PatBlt(hDC, rand() % rct.right, rand() % rct.bottom, 0, 0, PATINVERT);

        Sleep(rand() % 50);
    }
}

int main()
{
    FreeConsole();
    int meh = MessageBox(NULL, L"fyi: this is a pretty harmless program coded by me, doesn't do anything than just paint the screen.\n\nyou could also check my github page (https://github.com/RainbowIsUhhhh/)also known as meh.", L"GDIFuck", MB_YESNO | MB_ICONINFORMATION);
    
    switch (meh) {
    case IDYES: missingAroundWithPlgBlt(); break;
    case IDNO: exit(0); break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
