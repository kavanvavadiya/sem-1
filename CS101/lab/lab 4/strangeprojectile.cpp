#include<simplecpp>

main_program
{

    initCanvas("projectile",800,800);
    float vx=1,vy3,vy1=0,vy2=1,grav=0.1,k;

    int start=getClick();
    Circle c(start/65536,start%65536,5);
    c.penDown();

    for(int j=0; j<9; j++)
    {
        for(int i=0; i<(20*k); i++)
        {
            vy2=vy2-grav;
            c.move(vx,-vy2);

        }

        vy2=-vy2;
        vy3=vy1+vy2;
        k=vy3;
        vy1=vy2;
        vy2=vy3;



    }


    getClick();

}

