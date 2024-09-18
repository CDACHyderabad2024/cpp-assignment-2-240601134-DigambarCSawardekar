#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag = 0;

    cout << "Enter a Number to check whether its Prime or not : " << endl;
    cin >> n;
    for (int i = 2 ; i < n ;i++)
    {
    if (n % i == 0)
    {
        
        cout << "Number is not Prime.";
        flag = 1;
        break;

    }
    
    }

    if (flag == 0)
    {
        cout << "Number is Prime.";
    }

    return 0;
}