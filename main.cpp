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

void readFile(string input_file, vector<process> &list)
{
  ifstream myfile;
	myfile.open(input_file);

  int numOfProcess;
  process temp;

  myfile >> numOfProcess;

  int i = 0;
  while (i < numOfProcess)
  {
    myfile >> temp.num;
		myfile >> temp.start_T;
		myfile >> temp.end_T;
		myfile >> temp.numBlocks;

    vector<int> tempBsize;
    int block;

    int j =0;
    while(i < temp.numBlocks)
    {
      myfile >> block;
      tempBsize.push_back(block);
      j++;
    }
    temp.blockSizes = tempBsize;
    list.push_back(temp);
    i++;
  }
  myfile.close();
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

	readFile("in1.txt", list);

	cout << "t = 0 : Process 1 arrives"<< endl;
	cout << "       Input Queue:[1]" << endl;

	return 0;
}
