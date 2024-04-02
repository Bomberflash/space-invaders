#pragma once
#include <raylib.h>

class Arrow {
    public:
    Arrow();
    void Draw();
    void Draw2();
    Texture2D image2;
    private:
    Vector2 position2;
    Vector2 position3;
    Font font;
};