#include <iostream>
using namespace std;

int h(int n);

int main()
{
    int n;
    int count = 0 ;

    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {   
        if(i < 100)
            count++;

        else if(i>99 && i< 1000)
            {
                if(h(i))
                    count++;
            }
            
    }
    cout << count << endl;
}

int h(int n)            //n이 한수인지 체크 (한수일 경우 return값 1 아닐 경우 0)
{    
    if(n == 1000)
        return 0;

    int arr[4] = {0};
    int i = 0;

    while(1)
    {
        if(n/10 == 0)
        {
            arr[i] = n;
            break;
        }

        arr[i] = n%10;
        n /= 10;
        i++;
    }

    if(arr[2]-arr[1]==arr[1]-arr[0])
        return 1;
    else
        return 0;
}