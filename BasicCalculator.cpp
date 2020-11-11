#include <iostream>
#include <functional> // for std::function
namespace arithmetic
{
    int add(int x, int y)
    {
        return x + y;
    }
    int subtract(int x, int y)
    {
        return x - y;
    }
    int multiply(int x, int y)
    {
        return x * y;
    }
    int divide(int x, int y)
    {
        return x / y;
    }
}
int askForInt()
{
    std::cout << "please give me an integer\n";
    int x;
    std::cin >> x;
    std::cout << "The integer provided is: " << x << "\n";
    return x;
}
void printOperation(char operation)
{
    std::cout << "The operation provided is: " << operation << "\n";
}
using arithmeticFcn = std::function<int(int, int)>;
arithmeticFcn askForOperation()
{
    char x;
    while (true)
    {
        std::cout << "please give me an an operation ( + , - , * or / )\n";
        std::cin >> x;
        switch (x)
        {
        case '+':
            printOperation(x);
            return arithmetic::add;
        case '-':
            printOperation(x);
            return arithmetic::subtract;
        case '*':
            printOperation(x);
            return arithmetic::multiply;
        case '/':
            printOperation(x);
            return arithmetic::divide;
        default:
            std::cout << "undefined operation, please check!\n";
        }
    }
}
int main()
{
    int x{ askForInt() };
    arithmeticFcn operation{ askForOperation() };
    int y{ askForInt() };
    std::cout << "the result is: " << operation(x,y) << "\n";
    return 0;
}
