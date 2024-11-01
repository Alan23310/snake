#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;

    while (true)
    {
        auto can = Canvas(300,300);
        
        can.DrawBlockCircle(150,50,frame);


        can.DrawBlockCircle(145,45,frame);
        can.DrawBlockCircle(140,40,frame);
        can.DrawBlockCircle(135,35,frame);
        can.DrawBlockCircle(130,30,frame);
        can.DrawBlockCircle(125,30,frame);
        can.DrawBlockCircle(120,35,frame);
        can.DrawBlockCircle(115,40,frame);
        can.DrawBlockCircle(110,45,frame);
        can.DrawBlockCircle(105,50,frame);
        can.DrawBlockCircle(105,55,frame);
        can.DrawBlockCircle(110,60,frame);
        can.DrawBlockCircle(115,65,frame);
        can.DrawBlockCircle(120,70,frame);
        can.DrawBlockCircle(125,75,frame);
        can.DrawBlockCircle(130,80,frame);
        can.DrawBlockCircle(135,85,frame);
        can.DrawBlockCircle(140,90,frame);
        can.DrawBlockCircle(145,95,frame);


        can.DrawBlockCircle(150,100,frame);


        
        can.DrawBlockCircle(155,45,frame);
        can.DrawBlockCircle(160,40,frame);
        can.DrawBlockCircle(165,35,frame);
        can.DrawBlockCircle(170,30,frame);
        can.DrawBlockCircle(175,30,frame);
        can.DrawBlockCircle(180,35,frame);
        can.DrawBlockCircle(185,40,frame);
        can.DrawBlockCircle(190,45,frame);
        can.DrawBlockCircle(195,50,frame);
        can.DrawBlockCircle(195,55,frame);
        can.DrawBlockCircle(190,60,frame);
        can.DrawBlockCircle(185,65,frame);
        can.DrawBlockCircle(180,70,frame);
        can.DrawBlockCircle(175,75,frame);
        can.DrawBlockCircle(170,80,frame);
        can.DrawBlockCircle(165,85,frame);
        can.DrawBlockCircle(160,90,frame);
        can.DrawBlockCircle(155,95,frame);
    

        
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Blue, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.3s);
        frame++;
    }

    return 0;
}