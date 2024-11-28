#include<simplecpp>

main_program
{
//Write your code here

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1; i<=1000; i++)
    {
    int br;

        for(int j=0; j<n; j++)
        {

            if (i==arr[j])
            {
            int count = 0;

                for (int k=(i+1); k<=1000; k++)
                {
                    for(int m = 0 ; m<n; m++)
                    {

                        if (k==arr[m])
                        {
                            count++;
                        }
                    }

                }
                if(count == i){ cout << "1"; br=count; break; }


            }
            if(br == i){ break;}

        }
        if(br == i){ break;}
        if(i==1000){cout << "0";}


    }

}

