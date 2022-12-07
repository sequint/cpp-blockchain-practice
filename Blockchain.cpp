// Implementation file for Blockchain class

#include "Blockchain.h"
using namespace std;

Block Blockchain::getLastBlock() const
{
  return chain.back();
}

void Blockchain::addBlock(Block newBlock)
{
  newBlock.previousHash = getLastBlock().getHash();
  newBlock.mineBlock(difficulty);
  chain.push_back(newBlock);
}