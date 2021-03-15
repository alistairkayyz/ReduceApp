#include <iostream>

using namespace std;


int greatestCommonDenom(int, int);
int reduce(int &num, int &denom);

int main()
{
    int num, denom;

    cout<<"Please enter two integers you would like to devide"<<endl;
    cin>>num>>denom; // receive input from user


    if (reduce(num,denom)){
        cout<<"The answer is: "<<num<<"/"<<denom<<endl;
    }
    else{
        cout<<"Fraction Error"<<endl;
    }
    return 0;
}

int greatestCommonDenom(int x, int y){

    if(x > y){

        // return the greatest common denominator
        return greatestCommonDenom(x - y, y);
    }
    else if(x < y){

        // return the greatest common denominator
        return greatestCommonDenom(x, y - x);
    }
}

int reduce(int &num, int &denom){

    if(num <= 0 || denom <= 0){
        return 0;
    }
    else{
        int hold = num; // hold the value of a before it is replaced
        num /= greatestCommonDenom(num, denom);
        denom /= greatestCommonDenom(hold, denom);

        return 1;
    }

}
