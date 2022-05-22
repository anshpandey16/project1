/*#include<iostream>
using namespace std;

int main(){
	int marks[] = {23,45,65,43};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	return 0;
}*/
/*#include <iostream>
/*#include <iostream>
using namespace std;

int main()
{
  char c;
  int alphabets = 0, num = 0, space = 0,space1=0;
  while (c != '$')
  {
    cin >> c;
    if (c > 64 && c < 91)
    {
      c = c + 32;
    }
    if (c >= 'a' && c <= 'z')
    {
      alphabets++;
    }
    else if (c >= '0' && c <= '9')
    {
      num++;
    }
    else if ( c == '\t' || c == '\n')
    {
      space++;
    }
  }
  cout << alphabets << "" << num << "" << (space+space1);
}*/
/*#include<iostream>
using namespace std;

int main() {
     int x,value;
    cin>>x;
    for(int N=1;N<=x;N++){
        value = (3*N)+2;
        if(value%4==0){
        	x++;
        	continue;
        }
        cout<<value<<" ";
    }
	return 0;
}*/
/*#include<iostream>
using namespace std;

char upper(char c){
	return 'A' +(c-'a');
	}
	
int main(){
	while(true){
		string s;
		cin>>s;
		if(s.size() == 0 ){
			break;
		}
		for(int i=0;i < s.size();++i){
			s[i] = upper(s[i]);
			
		}
		cout<< s << endl;
	}
}*/
/*include<iostream>
using namespace std;

int main(){
	int n,p=3;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
		}
	int max =arr[0];
	
	for(int i=0;i<n;i++){
		for(intj=i+1;j<n;j++){
			if(max > arr[j])
			if((n-p) == i){

		}
	}
		
}*/
/*PROGRAM TO FIND THREE GREATER NUMBER IN THE ARRAY


#include<iostream>
using namespace std;

int main(){
	int n,p=3;
	cin>>n;
	int temp =0;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
		}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
            if( arr[i] > arr[j]){
            	temp = arr[i];
            	arr[i] = arr[j];
            	arr[j] = temp;
            }
        }
    }
    int w =1;
    cout<< "first greater element in the array are ";
    for (int i = (n-3);i<n; i++){
    	cout<<arr[i]<<"  ";
	}
    return 0;
}*/

#include<iostream>
using namespace std;

int main(){
   int arr[6] = {1,2,3,4,5,4};
   int arr1[5] = {3,5,4,6,7};
   for(int i=0;i<6;i++){
       for(int j=0;j<5;j++){
           if(arr[i] == arr1[j]){
               cout<<arr[i]<<" ";
           }
       }
   }
}




