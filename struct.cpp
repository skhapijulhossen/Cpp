#include <iostream>
#include <string>
using namespace std;

struct Point{
    int x, y;
};

int main(void)
{
    struct Point start;
    struct Point end;
    start.x = 0;
    start.y = 0;
    end.x = 8;
    end.y = 11;
    cout<<"Manhatten Distance Between:"<<(end.x - start.y) * (end.y - start.x);
    return 0;
}