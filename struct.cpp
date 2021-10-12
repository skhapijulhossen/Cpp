#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Point{
    int x, y;
};

int main(void)
{
    struct Point start;
    struct Point end;
    cout<<"Enter X and Y co-ordinate of First Point: ";
    cin>>start.x>>start.y;
    cout<<"Enter X and Y co-ordinate of Second Point: "<<endl;
    cin>>end.x>>end.y;
    cout<<"Euclidian Distance Between Ponits:"<<sqrt(abs((end.x - start.y)^2) + (abs(end.y - start.x)^2));
    return 0;
}