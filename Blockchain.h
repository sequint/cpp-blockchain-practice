#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "Block.h"
using namespace std;

class Blockchain
{
  private:
    uint32_t difficulty;
    vector<Block> chain;

    Block getLastBlock() const;

  public:
    Blockchain()
    {
      // Initiate a new block to the back of the chain
      chain.emplace_back(Block(0, "Root Block"));
      difficulty = 6;
    }

    void addBlock(Block);
};
#endif