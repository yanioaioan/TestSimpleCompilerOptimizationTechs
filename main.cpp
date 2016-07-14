#include <iostream>
#include <chrono>



using namespace std;


void printSmthSlow(int t)
{
    std::cout<<"condition met"<<t<<std::endl;
}

//loop unrolling //Check Profiler for number of loop jumps

void printSmthFast(int t)
{
        printSmthSlow(t);
        printSmthSlow(t+1);
        printSmthSlow(t+2);
        printSmthSlow(t+3);
        printSmthSlow(t+4);
        printSmthSlow(t+5);
        printSmthSlow(t+6);
        printSmthSlow(t+7);
        printSmthSlow(t+8);
        printSmthSlow(t+9);
//        printSmthSlow(t+10);
//        printSmthSlow(t+11);
//        printSmthSlow(t+12);
//        printSmthSlow(t+13);
//        printSmthSlow(t+14);
//        printSmthSlow(t+15);
//        printSmthSlow(t+16);
//        printSmthSlow(t+17);
//        printSmthSlow(t+18);
//        printSmthSlow(t+19);

}


int main()
{

    auto begin = std::chrono::high_resolution_clock::now();
    bool condition=1<2;

            //slow
            for (int t=0;t<1000;t+=1)
            {
                {
                    printSmthSlow(t);
                }
            }


            //fast
            for (int t=0;t<1000;t+=10)
            {
                {   // 50% speed up in computation
                    printSmthFast(t);
                }
            }

    auto end = std::chrono::high_resolution_clock::now();
    int result=std::chrono::duration_cast<std::chrono::nanoseconds>(end-begin).count();

    std::cout << "result: " << result << " ns" << std::endl;



    return 0;
}
