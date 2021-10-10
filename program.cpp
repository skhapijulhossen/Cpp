#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int num, n;
    cout<<"Enter NUmber Length of array: "<<endl; cin>>n;
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>> num;
        sum += (float)num;
    }
    
    cout<<"Average: "<<(float)sum/n<<endl;
    return 0;
}
