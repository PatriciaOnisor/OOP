#include "Canvas.h"
#include <iostream>

Canvas::Canvas(int width, int height) {
    latime = width;
    inaltime = height;
    for (int i = 1; i <= inaltime; i++) {
        for (int j = 1; j <= latime; j++) {
            canvas[i][j] = ' ';
        }
    }

}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    for (int i = 1; i <= latime; i++)
        for (int j = 1; j <= inaltime; j++)
            if ((j - x) * (j - x) + (i - y) * (i - y) == ray * ray)
                canvas[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    for (int i = 1; i <= latime; i++)
        for (int j = 1; j <= inaltime; j++)
            if ((j - x) * (j - x) + (i - y) * (i - y) < ray * ray)
                canvas[i][j] = ch;

}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int i = top; i <= bottom; i++) {
        SetPoint(i, left,ch);
        SetPoint(i, right,ch);
    }
    for (int j = left; j <= right; j++) {
        SetPoint(top, j, ch);
        SetPoint(bottom, j, ch);

    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int i = left + 1; i < right; i++) {
        for (int j = top + 1; j < bottom; j++) {
            SetPoint(i, j, ch);
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
    if (x >= 0 && x < inaltime && y >= 0 && y < latime) {
        canvas[x][y] = ch;
    }
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    //
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2 ? 1 : -1);
    int sy = (y1 < y2 ? 1 : -1);
    int err = dx - dy;

    while (true) {
        SetPoint(x1, y1, ch);
        if (x1 == x2 && y1 == y2) break;
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
}

void Canvas::Print() {
    for (int i = 1; i <= inaltime; i++) {
        for (int j = 1; j <= latime; j++) {
            std::cout << canvas[i][j]<<' ';
        }
        std::cout << std::endl;
    }
}

void Canvas::Clear() {
    for (int i = 1; i <= inaltime; i++) {
        for (int j = 1; j <= latime; j++) {
            canvas[i][j] = ' ';
        }
    }
}
