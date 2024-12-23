
# include <iostream>
# include <array>
using namespace std;


void  selectionSort(array<int,10> A){

  const int len =A.size();
  for(int j = 0;j<len-1;j++){
    int index = j;
    for(int i=j+1;i<len;i++){
      if(A[index]>A[i]){
	index = i;
      }
    }
      int temp  =A[index];
      A[index] = A[j];
      A[j] = temp;

 
  }
  for(int i=0 ;i<10;i++){
     cout << A[i]<<endl;
  }
  
  //  cout << A[i]<<endl;
}




int main (){
  array<int, 10> A = {10, 13, 15, 12, 5, 2, 4, 6, 7, 80};

 selectionSort(A);
}

    
     
