#include<iostream>
using namespace std;
main()
{

{
    for (int i = 0; i<5; i++)
    {

        for (int j = 0; j<5; j++)
        {

            if (i == 0 || i == 4 || j == 0 || j == 4 || i == 2)
            {
                if (i!= j){
                    cout << "*";
                }
            }
            else
            {
                cout << " ";
            }

        }

        cout << endl;
    }
}


}
