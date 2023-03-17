#include <iostream>
#include "xml/Xml.h"
#include "xml/Parser.h"

#define LOG(x) std::cout << x << std::endl;
using namespace yazi::xml;

int main() {

    Parser parser;
    parser.load_file("../test.xml");

    Xml x = parser.parse();
    LOG(x.str())
    return 0;
}
