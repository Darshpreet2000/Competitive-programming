#include <iostream>
using namespace std;

#define ArraySize 1024
#define TotalPointers 100


struct BlockStructure // block of array having size = 1024
{
	int A[ArraySize];
};

struct Container
{
	int temp;
	int* Pointer_;
	int PSize; // point to block
};


class SimpleIndex
{
	BlockStructure* TempArray;

public:
	SimpleIndex()
	{
		TempArray = new BlockStructure[ArraySize];
	}
	Container* Calculate(int StartingPoint, int Object)
	{
		Container* Result = new Container;

		Result->Pointer_ = new int;
		Result->Pointer_[0] = Object;
		Result->PSize = 1;

		Result->temp = TempArray[StartingPoint].A[Object];

		return Result;
	}
	~SimpleIndex()
	{
		delete[] TempArray;
	}
};

class TwoLevelIindex
{
public:
	BlockStructure** TempArray;

	TwoLevelIindex()
	{
		TempArray = new BlockStructure * [ArraySize];

		for (int i = 0; i < ArraySize; i++)
			TempArray[i] = new BlockStructure[ArraySize];
	}
	Container* Calculate(int StartingPoint, int Object)
	{
		int index1 = Object / ArraySize;
		int index2 = Object % ArraySize;

		Container* Result = new Container;

		Result->PSize = 2;
		Result->Pointer_ = new int[2];
		Result->Pointer_[0] = index1;
		Result->Pointer_[1] = index2;

		Result->temp = TempArray[StartingPoint][index1].A[index2];

		return Result;
	}
	~TwoLevelIindex()
	{
		for (int i = 0; i < ArraySize; i++)
			delete[] TempArray[i];

		delete[] TempArray;
	}
};

class CombinedScheme
{

public:
	BlockStructure metaData;
	BlockStructure* Array;

	BlockStructure** Block1;
	BlockStructure*** Block2;
	BlockStructure**** Block3;

	CombinedScheme()
	{
		Array = new BlockStructure[TotalPointers];
		Block1 = new BlockStructure * ();

		Block1[0] = new BlockStructure[ArraySize];
		Block2 = new BlockStructure * *();

		Block2[0] = new BlockStructure * [ArraySize];
		for (int i = 0; i < ArraySize; i++)
			Block2[0][i] = new BlockStructure[ArraySize];

		Block3 = new BlockStructure***;
		Block3[0] = new BlockStructure * *[ArraySize];
		for (int i = 0; i < ArraySize; i++)
		{
			Block3[0][i] = new BlockStructure * [ArraySize];

			for (int j = 0; j < ArraySize; j++)
				Block3[0][i][j] = new BlockStructure[ArraySize];
		}
	}
	Container* Calculate(int StartingPoint, int Object)
	{
		if (Object < TotalPointers + ArraySize && StartingPoint == TotalPointers && Object > (TotalPointers - 1))
		{
			Container* Result = new Container;

			Result->PSize = 1;
			Result->Pointer_ = new int[1];
			Result->Pointer_[0] = Object - TotalPointers;

			Result->temp = Block1[0][StartingPoint].A[Object - TotalPointers];

			return Result;
		}
		else if (Object < (TotalPointers + ArraySize + ArraySize * ArraySize) && StartingPoint == (TotalPointers + 1) && Object >(TotalPointers + ArraySize - 1))
		{
			int index1 = (Object - TotalPointers + ArraySize) / ArraySize;
			int index2 = (Object - TotalPointers + ArraySize) % ArraySize;

			Container* Result = new Container;

			Result->PSize = 2;
			Result->Pointer_ = new int[2];
			Result->Pointer_[0] = index1;
			Result->Pointer_[1] = index2;

			Result->temp = Block2[0][StartingPoint][index1].A[index2];
			return Result;
		}
		else if (Object > (TotalPointers + ArraySize + ArraySize * ArraySize) && StartingPoint == (TotalPointers + 2))
		{
			int temp_ = Object - TotalPointers + ArraySize - ArraySize * ArraySize;

			int index1 = temp_ / ArraySize * ArraySize;
			int index2 = (temp_ % ArraySize * ArraySize) / ArraySize;
			int index3 = (temp_ % (ArraySize * ArraySize)) % ArraySize;

			Container* Result = new Container;
			Result->PSize = 3;
			Result->Pointer_ = new int[3];

			Result->Pointer_[0] = index1;
			Result->Pointer_[1] = index2;
			Result->Pointer_[2] = index3;

			Result->temp = Block3[0][StartingPoint][index1][index2].A[index3];
			return Result;
		}
		else if (Object < TotalPointers && StartingPoint < TotalPointers)
		{
			Container* Result = new Container;

			Result->PSize = 1;
			Result->Pointer_ = new int[1];
			Result->Pointer_[0] = Object;

			Result->temp = Array[StartingPoint].A[Object];
			return Result;
		}
	}
	~CombinedScheme()
	{
		// destructor to delete all the arrays and free the memory
	}
};