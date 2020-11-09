/* PROGRAM TO GET INPUT FROM USER AND CHECK THE FACTORIAL OF THE GIVEN NUMBER */ 



#include <iostream>

using namespace std;

int fact(int f)

{

    int i=1,fact=1;

    while(i<=f)

    {

        fact=fact*i;

        i++;

    }

    return fact;

}

int main()

{

    int n;

    cout<<"\n ENTER THE NUMBER = ";

    cin>>n;

    cout<<" \n FACTORIAL OF THE NUMBER IS "<<fact(n);

    return 0;

}
