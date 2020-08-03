#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage " << argv[0] << " output file\n";
        return 1;
    }
    std::ifstream in(argv[1], std::ios::in);
    if (!in.is_open())
    {
        std::cerr << "Cannot open file " << argv[1] << '\n';
        return 1;
    }
    unsigned min = 0;
    
    // TODO: Find the minimun value in the input file
    // The result should be 98

    std::cout << "Minimum value: " << min << '\n';

    return 0;
}
