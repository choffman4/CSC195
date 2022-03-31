// Week_01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World! C++\n";
    
    int iVal1 = -1;
    short shVal2 = 0;
    int iVal3 = -2;

    std::cout << "\nV1 = " << iVal1;
    std::cout << " address of V1 = " << &iVal1;
    std::cout << "\nvalue of V2 = " << shVal2;
    std::cout << " address of V2 = " << &shVal2;
    std::cout << "\nvalue of V3 = " << iVal3;
    std::cout << " address of V3 = " << &iVal3;

    std::cout << "\n\n !!! diff V1 and V3 = " << (&iVal1-&iVal3);
    std::cout << "\nsizeof(V1) = " << sizeof(iVal1);
    std::cout << "\nsizeof(V2) = " << sizeof(shVal2);

    std::cout << "\n\n *** End of Prog *** ";
}
