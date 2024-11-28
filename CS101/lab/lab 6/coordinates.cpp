#include<simplecpp>

void print_coordinates(int n)
{
    int x=0,y=0;
    float a=0;
    char k;

    for(int i=0; i<n; i++)
    {
        cin >> k;
        if(k=='F')
        {
            y=y+round(sin(a));
            x=x+round(cos(a));
        }
        if(k=='L')
        {
            a=a+(PI/2);
        }


    }
    cout << x <<" " << y;


}
