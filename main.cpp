#include <iostream>

using namespace std;

int main()
{
    int i, upto, num, sum = 0;

    //Take input from user
    cout << "Find the sum of prime numbers up to: ";
    cin >> upto;

    //Sort out all prime numbers within the range
    for(num=2; num<=upto; num++){
        for(i=2; i<=(num / 2); i++){
            if(num%i==0){
                i=num;
                break;
            }
        }

        //If the number is prime, add it
        if(i!=sum){
            sum+=num;
        }
    }

    cout << endl << "Sum of all prime numbers upto " << upto << " is " << sum;

    return 0;
}
