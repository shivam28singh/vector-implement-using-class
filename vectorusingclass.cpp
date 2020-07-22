#include<iostream>
using namespace std;

template<typename T>

class vector{

public:
	T *a;
	int curr_size=0;
	int capacity=0;

	vector(int x=0){
		a=new T[x];
		capacity=x;
		
	}

	void push_back(T m){
		if(curr_size==capacity){
			if(capacity==0)
				capacity=1;
			else
				capacity=2*capacity;

		//take another pointer which points to the dynamic array
			T* aptr=a;
         
         //make new dynamic array
			a=new T[capacity];

		// now copy number from prev dynamic array
			for(int i=0;i<curr_size;i++)
				a[i]=aptr[i];

        //delete aptr
			delete []aptr;
		}

		a[curr_size] = m;
		curr_size++;
	}
		

	void pop_back(){
       if(curr_size>0)
		curr_size--;
	}

	int size(){
		return curr_size;
	}

	int Capacity(){
		return capacity;
	}

};

int main(){
	vector<int>v(5); // it will make an array of 5 blocks

	cout<<v.Capacity()<<endl; 
	cout<<v.size()<<endl;     
    cout<<endl;
	
	v.push_back(1);
	cout<<v.Capacity()<<endl;  
	cout<<v.size()<<endl;      
	cout<<endl;
 
    v.push_back(2);
    cout<<v.Capacity()<<endl;  
	cout<<v.size()<<endl;      
	cout<<endl;
 
    v.push_back(3);
    cout<<v.Capacity()<<endl;  
	cout<<v.size()<<endl;      
	cout<<endl;

	v.push_back(4);
    cout<<v.Capacity()<<endl;  
	cout<<v.size()<<endl;      
	cout<<endl;

	v.push_back(5);
    cout<<v.Capacity()<<endl;  
	cout<<v.size()<<endl;      
	cout<<endl;

	v.push_back(6);
    cout<<v.Capacity()<<endl;  
	cout<<v.size()<<endl;      
	cout<<endl;

	v.pop_back();
	cout<<v.Capacity()<<endl; 
	cout<<v.size()<<endl;      
	cout<<endl;


  return 0;

	}