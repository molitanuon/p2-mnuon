#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

class process
{
public:
	int num;
	int start_T;
	int end_T;
	int numBlocks;
	vector<int> blockSizes;
};

class memBlock
{
public:
	int startBlock;
	int endBlock;
	int processNum;
	int pageNum;
	bool isFree;
};

void readFile(string input_file, vector<process> &process_list)
{

}

int main()
{
	// Check the command line arguments
	int memSize = 0;
	int pageSize= 0;

  cout<< "ENTER Memory Size(Kbytes): ";
	cin>> memSize;
	cout<< "ENTER Page Size (1:100, 2:200, 3:400): ";
	cin>> pageSize;
	pageSize *= 100;
	
  if (pageSize == 300)
    pageSize += 100;

	vector<process> list;
	vector<int> timeline;

	readInFile("in1.txt", process_list);
	findTimes(process_list, timeline);
	printOutput(process_list, timeline, memSize, pageSize);

	return 0;
}
