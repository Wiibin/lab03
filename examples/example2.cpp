#include <print.hpp>

#incude <fstream>
int main(int argc, char** argv)
{
std::ofstream file("log.txt");
print(std::string("hello"), file);
}
