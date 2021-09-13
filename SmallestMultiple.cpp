#include <iostream>
#include <string>
#include <cmath>

int main()
{

    std::cout << "Smallest Multiple Solution!\n";

    int answer = 1;
    int devisable = 0;
    bool smallest = false;
    
    while (smallest != true)
    {

        answer++;

        for (int i = 1; i <= 20; i++)
        {

            if (answer % i == 0)
            {

                devisable++;

            }

        }

        if (devisable == 20)
        {

            smallest = true;

        }
        else
        {

            devisable = 0;

        }

    }
    
    std::cout << answer;

}