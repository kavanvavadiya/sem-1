#include<simplecpp>

main_program
{
//Write your code here
    int n1, n2, max;
    cin >> n1 >> n2;

    // maximum value between n1 and n2 is stored in max
    if(n1>n2)
    {
        max=n1;
    }
    else
        max=n2;


    for(int i=0; true; i++)
    {
        if (max % n1 == 0 && max % n2 == 0)    // for lcm of two number bothe number should divisible by lcm
        {
            cout << max;
            break;
        }
        else
            max++;
    }

}

