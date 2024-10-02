#include<iostream>
int main()
{
    while (true)
    { 
        printMenu();
        int useroption = getuseroption();
        processuseroption(useroption);
    }
    return 0;
}

void printMenu()
{
    // 1 print help
    std::cout << "1. help" << std::endl;
    // 2 print exchange stats
    std::cout << "2. Exchange stats" << std::endl;
    // 3 make an offer
    std::cout << "3. Make an offer" << std::endl;
    // 4 make a bid
    std::cout << "4. make a bid" << std::endl;
    // 5 print wallet
    std::cout << "5. print wallet" << std::endl;
    // 6 continue
    std::cout << "6. continue" << std::endl;
    std::cout << "===========" << std::endl;
}
int getuseroption()
{
    int useroption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin>> useroption;
    std::cout<<"you chose:"<< useroption<<std::endl;
    return useroption;
}
void processuseroption(int useroption)
{
    if (useroption == 0)// bad input
    {
        std::cout<<"invalid choice. Choose 1-6"<<std::endl;
    }
    if (useroption == 1)
    {
        std::cout<<"Help - make money"<<std::endl;
    }
    if (useroption == 2)
    {
        std::cout<<"looks good"<<std::endl;
    }
    if (useroption == 3)
    {
        std::cout<<"iMake and offer-enter amount"<<std::endl;
    }
    if (useroption == 4)
    {
        std::cout<<"make a bid"<<std::endl;
    }
    if (useroption == 5)
    {
        std::cout<<"your wallet is empty"<<std::endl;
    }
    if (useroption == 6)
    {
        std::cout<<"continue"<<std::endl;
} 
}