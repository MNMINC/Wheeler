#include <iostream>
//#include <conio.h>
using namespace std;

int main() 
{
    int level = 0;
    int levelMax = 5; 
    int tabSpaces = 5;
    while(true/*GetKeyState('A') & 0x8000*/)
    {
        for (int i = 0; i < level; ++i)
            for (int s = 0; s < tabSpaces; ++s)
                cout << " ";
        switch (rand() % 3)
        {
            case 0:
                if (level < levelMax)
                {
                    cout << "{";
                    ++level;
                }
                break;
            case 1:
                if (level > 0)
                {
                    cout << "}";
                    --level;
                }
                break;
            case 2:
                cout << "hack();";
                break;
                    
        }
        cout << "\n";

    }
}
