/*
//sorting

#include<iostream>
using namespace std;
int main()
{
	int i,m,n,temp,j;
	cout<<"Enter the number :";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the value :"<<endl;
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
	
}



//function  :-

#include<iostream>
using namespace std;
void display()
{
	int a,b,c;
	cout<<"Enter the two no :";
	cin>>a>>b;
	c=a+b;
	cout<<"ADD : "<<c;
}



int main()
{
	display();
	display();
	return 0;
}


//function overloading 
//we can create or maintain same function name means go for (FO)
// we have function name same but varible and parameter different
#include<iostream>
#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int sum(int a,int b,int c,int v)
{
	return a+b+c+v;
}

int main()
{
	int a,b;
	
	cout<<"Total :"<<sum(10,10)<<endl;
	cout<<"Total :"<<sum(10,10,22,33)<<endl;
	cout<<"Total :"<<sum(10,10,33)<<endl;
	cout<<"Total :"<<sum(10,10)<<endl;
	return 0;
}





//class program
//Area Of Circle
//Circumferences of a circle

#include<iostream>

using namespace std;
class circle
{
	private:
		float radius;
		
	public:
		float area()
		{
			cout<<"Enter the number :";
			cin>>radius;
			cout<<"The area of circle : "<<(3.14*(radius*radius))<<endl;
		}
		float circumferences()
		{
			cout<<"The Circum :"<<(2*3.14*radius);
		}
		
	
};
int main()
{
	circle o;
	o.area();
	o.circumferences();
	return 0;
}




//Acess Specifier  Public ,Private,procted
//public

#include<iostream>
using namespace std;
class student
{
	public:
		int age;
		string name;
		void get_display()
		{
			cout<<"Enter the name :"<<endl;
			cin>>name;
			cout<<"Enter the Age  :"<<endl;
			cin>>age;
			
		}
		void display()
		{
			cout<<"Student Name : "<<name<<endl;
			cout<<"Student Age  : "<<age<<endl;
			
		}
	
};
int main()
{
	student o;
	o.get_display();
	o.display();
	return 0;
}





///public get in main function


#include<iostream>
using namespace std;
class student
{
public:
    int age,reg_no,year;
		string name,co_name;
		
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"\nAge : "<<age<<endl;
			cout<<"\nReg_no : "<<reg_no<<endl;
			cout<<"\nCo_Name : "<<co_name<<endl;
			cout<<"\nYear : "<<year<<endl;
		}	
};
int main()
{
	student o;
	cout<<"Enter the name :"<<endl;
	cout<<"Enter the age : "<<endl;
	cout<<"Enter the reg_no : "<<endl;
	cout<<"Enter the Co_name : "<<endl;
	cout<<"Enter the year : "<<endl;
	cin>>o.name>>o.age>>o.reg_no>>o.co_name>>o.year;
	o.display();
	return 0;
}





//private

#include<iostream>
using namespace std;
class student
{
	private:
		int age;
		string name;
	public:
		void getin()
		{
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Enter the age : ";
			cin>>age;
		}
		string display()
		{
			cout<<"Student name : "<<name<<endl;
			cout<<"\nStudent age : "<<age<<endl;
		} 
	
};

int main()
{
	student o;
	o.getin();
	o.display();
}




// scope resolutions 
// outside of the class we can use but u can define in class first
//function type ,class name,scope resolution::,function call pannanum

#include<iostream>
using namespace std;
class student
{
public:
    int age,reg_no,year;
		string name,co_name;
		
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"\nAge : "<<age<<endl;
			cout<<"\nReg_no : "<<reg_no<<endl;
			cout<<"\nCo_Name : "<<co_name<<endl;
			cout<<"\nYear : "<<year<<endl;
		}	
		void git();
};
//function type ,class name,scope resolution::,function call pannanum
void student::git()
{
    cout<<"Enter the name :"<<endl;
	cout<<"\nEnter the age : "<<endl;
	cout<<"\nEnter the reg_no : "<<endl;
	cout<<"\nEnter the Co_name : "<<endl;
	cout<<"\nEnter the year : "<<endl;
	cin>>name>>age>>reg_no>>co_name;
	cin>>year;
}
	
	
int main()
{
	student o;
	o.git();
	o.display();
	return 0;
}

*/

//constructor and disstructor 
//types
//default constructor , parameterized,copy constructor
//when ever we call object 'o' automatically it will run the constructor
#include<iostream>
using namespace std;
class math
{
	private:
		int m1,m2,m3,total;
	public:
	math()
		{
			cout<<"Enter the m1,m2,m3 : ";
			cin>>m1,m2,m3;
			cout<<"Total"<<m1+m2+m3;
			
			
		}
		
	
};
int main()
{
	math o;
	o.math()
	return 0;
}












