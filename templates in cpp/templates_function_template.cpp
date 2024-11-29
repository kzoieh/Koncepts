#include<iostream>
using namespace std;

//Lets say I am making a template to find swap two data items

/*
    so using the two keywords defined by C++ that are
        1)template
        2)typename or class
*/

template <typename T> T swap_data_items(T *x, T *y)
/*
    T is used for parameterizing the function i.e. the datatype is given as a parameter 
    1) for the function in funcion template 
    2) as well passing parameter for the variables
    The templates in C++ use concet of Generics
*/
{
    int temp = *x;

    *x = *y;
    *y = temp;
}

//main function

int main()
{
    //Example1

    char charater1 = 'A';
    char charater2 = 'B';

    //mark how the template is defined and parameters are passed
    swap_data_items<char>(&charater1, &charater2);

    cout<<" a = "<<charater1<<endl;
    cout<<" b = "<<charater2<<endl;



    //Example 2

    int number1 = 1;
    int number2 = 2;

    swap_data_items<int>(& number1, &number2);

    cout<<" number1 = "<<number1<<endl;
    cout<<" number2 = "<<number2<<endl;

    return 0;
}