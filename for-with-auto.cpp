#include <iostream>
#include <vector>
int main(int argc, char** argv)
{
    int n = 5;
    std::vector<int> a(n);

    for (auto &it: a)
        std::cin >> it;

    std::cout<<"Test\n";
    
    
    for (auto it: a)
        std::cout<< a[it-1] <<"\n";
    


    return 0;
}