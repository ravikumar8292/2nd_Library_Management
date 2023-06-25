#include<bits/stdc++.h>
using namespace std;

class Library{
  public:  
    int id;
    char name[100];
    int BorrowedBookId;
    char author[100];
    char publication[100];
    int edition;
    int price;
    int pages;

};
class Student{
   public:
     char Department[100]; 
     char Course[100]; 
     char StudentName[100]; 
     char StudentUid[100];
};

int main(){
   Library lib[20];
   Student stud[20];
   int input=0;
   int count=0;
   int n;
   char B;
   int p=0;
   


   while(input!=8){
      cout<<"Enter 1 to Add Books in Library"<<endl;
      cout<<"Enter 2 to List of All Book "<<endl;
      cout<<"Enter 3 to List of All Book Details"<<endl;
      cout<<"Enter 4 to number of present books in Library"<<endl;
      cout<<"Enter 5 to display List borrowed books"<<endl;
      cout<<"Enter 6 to which books wants borrowed by student"<<endl;
      cout<<"Enter 7 to info about student who is borrowed books"<<endl;
      cout<<"Enter 8 to exit"<<endl;
      cin>>input;

      switch(input){
        case 1:
               start:
               cout<<"How many Books added in library"<<endl;
               cin>>n;

              for(int i=0;i<n;i++){
             
               cout<<"Enter Book Id"<<endl;
               cin>>lib[i].id;
               cout<<"Enter Book Title ";
               cin.getline(lib[i].name ,100 , '$');
               cout<<"Enter Book Author ";
               cin.getline(lib[i].author ,100 , '$');               
               cout<<"Enter Book Edition ";
               cin>>lib[i].edition;
               cout<<"Enter Book Publication"<<endl;
               cin.getline(lib[i].publication ,100 , '$');  
               cout<<"Enter Book Price"<<endl;
               cin>>lib[i].price;
               cout<<"Enter Book Pages"<<endl;
               cin>>lib[i].pages;
               count++;
               cout<<endl;
               cout<<"BOOK ADDED SUCCESSFULLY"<<endl;
                  
               }
               cout<<"ALL BOOKS ARE ADDED SUCCESSFULLY"<<endl;
               break;

        case 2: 
                cout<<"***********List of All Books *************"<<endl;
                for(int i=0;i<n;i++){
                  cout<<"Book Title : "<<lib[i].name<<endl;
                } 
                cout<<endl;  
                break;    

        case 3:
                cout<<"***********List of All Book Details*************"<<endl;
               for(int i=0;i<n;i++){
                cout<<"Book Id : "<<lib[i].id<<endl;
                cout<<"Book Title : "<<lib[i].name;
                cout<<"Book Author : "<<lib[i].author;
                cout<<"Book Edition : "<<lib[i].edition<<endl;
                cout<<"Book Publication : "<<lib[i].publication;
                cout<<"Book Price : "<<lib[i].price<<endl;
                cout<<"Book Pages : "<<lib[i].pages<<endl;
                cout<<endl;
               }  
               cout<<endl;
               break;

        case 4:
                cout<<"***********present books in library*************"<<endl;
                cout<<"number of present books in Library"<<" "<<n<<endl; 
                cout<<endl;
                break;

        case 5:
               cout<<"***********List Borrowed books*************"<<endl;
               if(n>0){
                  for(int i=0;i<n;i++){
                  cout<<"list of borrowed books : "<<lib[i].name<<endl;
               
               } 
               }
               else{
                     cout<<"we have not info about borrowed books "<<endl;
               }
              cout<<endl;
               break; 

       

        case 6:
            
               cout<<"Give me full information about student who is borrowed books"<<endl;
                cout<<"Enter Department Name "<<endl;
               cin.getline(stud[count].Department ,100 , '$'); 
                cout<<"Enter Course Name"<<endl;
               cin.getline(stud[count].Course ,100 , '$'); 
               cout<<"Enter Student Name "<<endl;
               cin.getline(stud[count].StudentName ,100 , '$');
               cout<<"Enter Student Uid"<<endl;
               cin.getline(stud[count].StudentUid ,100 , '$');
               cout<<endl;
               cout<<endl;

               cout<<"************List of All Books present in Library************ "<<endl;
               for(int i=0;i<n;i++){
                 cout<<"Book Id: "<<lib[i].id<<endl;
                 cout<<"Book Title: "<<lib[i].name<<endl;
               }

               cout<<"************which books wants borrowed by student************ "<<endl;
               cout<<"Enter Book Id which wants by students"<<endl;
               cin>>lib[count].BorrowedBookId;

               cout<<"Checking This bookid are present or Not in Library"<<endl;
               
               for(int i=0;i<n;i++){
               
                if(lib[count].BorrowedBookId==lib[i].id){
                    cout<<lib[i].name<<" Book are present in Library and Id is "<<lib[count].BorrowedBookId<<endl;
                    cout<<"If you want the borrowed this book then press Y Or Not borrowed then press N :"<<endl;
                    cin>>B;
                    if(int(B)==89){
                        cout<<"Borrowed Successfully"<<endl;
                    }
                    else {
                        if(int(B)==78)
                         cout<<"Not Borrowed "<<endl;
                         else{
                            cout<<"Your key are not simmilar"<<endl;
                         }

                    }
                }
                else{
                     p++;
                    if(p==n){

                    cout<<"This BookId are not same to the given  previous Book "<<endl;
                    }
                }
                     
                
               }
                cout<<endl; 
              break;
        case 7:
               cout<<"***********info about student who is borrowed books*************"<<endl;
                cout<<" Department Name "<<stud[count].Department<<endl;
                cout<<" Course Name "<<stud[count].Course<<endl;
                cout<<" Student Name "<<stud[count].StudentName<<endl;
                cout<<" Uid of student "<<stud[count].StudentUid<<endl;
                cout<<endl;
                
       
             
               break;                 
        case 8: 
               exit(0);
               break;

        default:
                cout<<"You have entered wrong value, please type again"<<endl;
                goto start;                   
      }
   }
return 0;
}

   