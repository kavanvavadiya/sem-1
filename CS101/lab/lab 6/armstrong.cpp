#include<simplecpp>

int armstrong(int n)
{
    int digit=0,sum,r,count=1;
    for(int i=1; count<=n; i++)
    {
        int temp=i;
        sum=0;

        for(int j=0; temp!=0; j++)
        {
            temp=temp/10;
            digit++;
        }
        temp=i;
       // cout << digit <<endl;
        for(int j=0; temp !=0; j++)
        {
            r=temp%10;
           double k=pow(r,digit);
            sum=sum+k;
            temp=temp/10;
        }
        if(sum==i)
        {
            count++;
        }
         digit=0;

    }
    return sum;

}
