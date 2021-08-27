#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


#include <math.h>
/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void fiddleDiddle(int m) {
    int k = 1;
    m>2*(10^5);
    
}



void fizzBuzz(int n) {
    int i = 1;
    while(i <= n){
        if(i%3==0 && i%5==0){
            std::cout << "FizzBuzz" << endl;
        }else if (i%3==0 && i%5!=0){
            std::cout << "Fizz" << endl;
        }else if (i%5==0 && i%3!=0){
            std::cout << "Buzz" << endl;
        } else if (i%3!=0 && i%5!=0){
            std::cout << i << endl;
        } else {
            std::cout << "Error\n" << endl;
        }
        i++;
    }
}

int main()
