#include <iostream>
#include <chrono>

using namespace std;

int main()
{

    auto begin = std::chrono::high_resolution_clock::now();
    bool condition=2;

//        if( condition )
    if( 1<2 )
        {
            for (int t=0;t<100000;t+=100)
            {
//                if( 1<2 )
                {
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;
                    std::cout<<"condition met"<<std::endl;

                }
            }
        }
    auto end = std::chrono::high_resolution_clock::now();
    int result=std::chrono::duration_cast<std::chrono::nanoseconds>(end-begin).count();

    std::cout << "result: " << result << " ns" << std::endl;
}
