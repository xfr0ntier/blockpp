#include "includes/blockchain.h"
#include <string>

int main() {
    Blockchain chain;

    std::string x[]{"abdo", "maro", "lol"};

    for (const std::string &item : x) {
        chain.appendBlock(item);
    }

    chain.display();

    return 0;
}