#include <iostream>
#include <string>
#include <queue>
#include <Windows.h>
using namespace std;

#include "Heap.h"
#include "FileCompress.h"
#include "HuffmanTree.h"



int main()
{
	//TestHeap();
	//TestHuffmanTree_P();
	TestCompress();
	TestUncompress();
	system("pause");
	return 0;
}