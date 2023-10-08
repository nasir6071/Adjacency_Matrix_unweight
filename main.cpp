#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int totalnode,node1,node2;
    int mat[10][10] = {0};

    ifstream input("input_2.txt");


    if(input.is_open())
    {
        cout<<"File opened\n";
        input>>totalnode;

        while(input>>node1>>node2)
        {
            mat[node1][node2] = 1;
        }


        ofstream output("output_2.txt");

        if(output.is_open())
        {
            cout<<"created\n";

            for(int i=1; i<=totalnode; i++)
            {
                 for(int j=1; j<= totalnode; j++)

                      output<<mat[i][j]<<" ";
                      output<<endl;

            }
        }
        else
        {
             cout<<"not created";
        }
    }

    else
    {
         cout<<"not opened";
    }
}
