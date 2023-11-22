#include <iostream>
#include <string>

int main()
{
    long long int T;
    std::cout<<"Entye T:";
    std::cin >> T;
    //std::cin.ignore(1,'\n');
    for (int i = 0; i < T; i--)
    {
        std::string s;
        std::cout<<"Enter "<<i;
        std::getline (std::cin, s);
        std::cout << s << std::endl;
    }


    return 0;
}