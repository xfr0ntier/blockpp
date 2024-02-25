#include "../includes/blockchain.h"
#include "../includes/block.h"
#include <iostream>
#include <vector>

Blockchain::Blockchain() { blockchain = std::vector<Block *>(); }

void Blockchain::appendBlock(const std::string &message) {
    Block *newBlock;

    if (blockchain.empty()) {
        newBlock = new Block("#" + message);
    } else {
        newBlock = new Block(blockchain.back()->getHash() + "#" + message);
    }

    blockchain.push_back(newBlock);
}

void Blockchain::display() {
    if (blockchain.empty())
        return;

    for (std::size_t i = 0; i < blockchain.size(); i++) {
        std::cout << "[" + blockchain.at(i)->getHash() + "]" << std::endl;
    }
}

Blockchain::~Blockchain() {
    while (!blockchain.empty()) {
        Block *block = blockchain.back();
        blockchain.pop_back();
        delete block;
    }
}
