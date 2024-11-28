#include<simplecpp>

int min_tiles(int w, int h)
{
    if (w>h)    // for making w<=h
    {
        int temp;
        temp=w;
        w=h;
        h=temp;
    }
    if(w==0 || h==0)  // width or hight = 0 then return 0
    {
        return 0;
    }
    else if (w==1)  // when width = 1 then h squre of 1*1 is possible
    {
        return h;
    }
    else if (h==1)  // when height = 1 then h squre of 1*1 is possible
    {
        return w;
    }
    else
    {
        int i,mside,k=0;
        for(i=-1; (round(pow(2,i+1))<= w); i++) {}  // for finding max side of squre fit in rectange
        mside = round(pow(2,i));
        // std::cout  << mside << std::endl ;
        for(int j=0; (k+1)*mside <= h; k++,j++) {} // number of max side squre possible is k
        //std::cout  << k << std::endl ;


        return (k + min_tiles(w-mside,h) + min_tiles(mside,(h-(k*mside)))); // remaining rectangle parts
    }


}

