#include "menu.hpp"
#include <iostream>

Menu::Menu()
{

}

void Menu::Draw()
{
    logo.Draw();
    button.Draw();
    if (up || IsKeyPressed(KEY_W)){ if (IsKeyPressed(KEY_S))
    {
        up = false;
        down = true;
    } else {
        play = true;
        up = true;
        arrow.Draw();
    }
    
    } else if (down || IsKeyPressed(KEY_S)) { if (IsKeyPressed(KEY_W))
        {  
            down = false;
        } else {
            play = false;
            down = true;
            arrow.Draw2();
        }
    }

    
    
    
}
