#include "DynArray.h"


#pragma region Constructors  
DynArray::DynArray()
{
	data = new int[DYN_ARRAY_DEFAULT_SIZE];
	DynArray::capacity = DYN_ARRAY_DEFAULT_SIZE; 
}
DynArray::DynArray(int size)
{
	data = new int[size];
	DynArray::capacity = size;
	DynArray::size = 0; 
}
DynArray::DynArray(int size, int value)
{
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = value; 
	}
}
DynArray::DynArray(int* arr, int size)
{

}
#pragma endregion 

#pragma region Iterator functions  

int *DynArray::begin()
{
	return &data[0]; 
}
int *DynArray::end()
{
	return &data[size - 1];
}
#pragma endregion 

#pragma region Capacity functions
void DynArray::resize(int n)
{
	data = new int[n]; 
	DynArray::size = n; 
}
void DynArray::reserve(int n)
{
	DynArray::capacity = n; 
}
void DynArray::shrink()
{
	DynArray::capacity = DynArray::size; 
}
bool DynArray::empty()
{
	if (DynArray::size == 0)
	{
		return true;
	}
	false;
}
int DynArray::maxSize()
{
	return DynArray::capacity; 
}

#pragma endregion

#pragma region Element access functions
int& DynArray::operator[]	(int n)
{
	return data[n];
}
								
int& DynArray::front()
{
	return data[0];
}
int& DynArray::back()
{
	return data[size - 1]; 
}

#pragma endregion

#pragma region Modifiers functions
void DynArray::push(int val)
{
	size += 1;
	data = new int[size];
	data[size - 1] = val; 
}
void DynArray::pop()
{
	size -= 1;
	data = new int[size];

}
void DynArray::insert(int position, int val)
{
	size += 1; 
	data = new int[size];

	for (int i = size; i > position; i--)
	{
		data[i - 1] = data[i - 2]; 
	}

	data[position - 1] = val; 
}
void DynArray::erase(int position)
{

}
void DynArray::erase(int first, int last)
{

}
void DynArray::clear()
{

}

#pragma endregion

#pragma region Utils functions	
void DynArray::fill(int *first, int *last, int value)
{

}
void DynArray::copy(int *first, int *last, int *dest)
{

}
void DynArray::print()
{

}
#pragma endregion