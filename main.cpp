#include <iostream>
#include "Blockchain.h"
#include "Block.h"
using namespace std;

int main()
{
  // Generate a new blockchain
  Blockchain bChain = Blockchain();

  cout << "Mining block 1..." << endl;
  bChain.addBlock(Block(1, "Block 1 Data"));

  cout << "Mining block 2..." << endl;
  bChain.addBlock(Block(2, "Block 2 Data"));

  cout << "Mining block 3..." << endl;
  bChain.addBlock(Block(3, "Block 3 Data"));

  return 0;
}