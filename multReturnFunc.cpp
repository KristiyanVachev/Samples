#include <iostream>

using namespace std;

void min_max(int a, int b, int &mn, int &mx)
{
    if (a < b)
    {
        mn = a;
        mx = b;
    }
    else
    {
        mn = b;
        mx = a;
    }
    cout<<"min: "<<mn<<" max: "<<mx<<endl;
}


int main()
{
    int x = 144;
    int y = 23;
    int minx = 0;
    int maxx = 0;

    min_max(x,y,minx,maxx);
    cout<<"MIN: "<<minx<<" MAX: "<<maxx<<endl;

    return 0;
}

