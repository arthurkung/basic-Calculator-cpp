#include <iostream>
int askForInt()
{
    std::cout << "please give me an integer\n";
    int x;
    std::cin >> x;
    return x;
}
char askForOperation()
{
    char x;
    while (true)
    {
        std::cout << "please give me an an operation ( + , - , * or / )\n";
        std::cin >> x;
        switch (x)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return x;
        default:
            std::cout << "undefined operation, please check!\n";
        }
    }
}
int main()
{
    int x;
    x = askForInt();
    
    char y;
    y = askForOperation();


    std::cout << "Hello! You have inserted: " << y;
    return 0;
}
