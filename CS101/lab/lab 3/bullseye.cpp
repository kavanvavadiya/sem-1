#include<simplecpp>


main_program
{
    initCanvas("SImplecpp Canvas",500,500);

    Circle c1(250,250,180);
    c1.setFill(true);
    Circle c2(250,250,140);
    c2.setColor(COLOR(255,255,0));
    c2.setFill(true);
    Circle c3(250,250,100);
    c3.setFill(true);
    Circle c4(250,250,60);
    c4.setColor(COLOR(255,255,0));
    c4.setFill(true);
    Circle c5(250,250,20);
    c5.setColor(COLOR(255,0,0));
    c5.setFill(true);

    wait(100);
}
