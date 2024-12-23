
# include <iostream>
# include <array>
using namespace std;


void  bubbleSort(array<int,10> A){
  const int len =A.size();
  for(int i = 0;i<len-1;i++){
    for(int j=0;j<len-1-i;j++){
      if(A[j]>A[j+1]){
	int temp = A[j];
	A[j] = A[j+1];
	A[j+1] = temp;
  	
      }
    }
    
  }
  for(int i=0 ;i<10;i++){
     cout << A[i]<<endl;
  }
  
  //  cout << A[i]<<endl;
}




int main (){
  array<int,10> A = {10,13,15,12,5,2,4,6,7,80};
 bubbleSort(A);
}

    
     


