#include<iostream>

int searchArray(int array[], int size,int element);

int main() 
{
    int numbers[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter elements to serach for: " << "\n";
    std::cin >> myNum;

    if(index != -1)
    {
        std::cout << myNum << " is at index \n";
    
    }else{
        std::cout << myNum << " is at index \n";
    }

    index = searchArray(numbers,size,myNum);

}

int searchArray(int array[], int size,int element)
{
     for(int i = 0; i < size; i++)
     {
        if(array[i] == element){
            return i;
        }
     }

     return -1;
}