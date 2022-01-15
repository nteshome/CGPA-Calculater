#include<iostream>
 using namespace std ;
int main()
{
    int a ;

cout<<"This Progam Calculates your GPA and CGPA " << endl;

cout << " How many subject's points do you want to calculate? : ";

cin >> a;
  float craditHr[a];
  float  point[a];
  {
        cout<<"input subject craditHr ";
      cin>> craditHr[a];
      cout <<"       ";
       for(int i =0 ; i<a ; i++ )
}
{
    for(int a =1 ; a <=4 ; a++  )
   cout<<"input grade result"<<"   ";
   cin >> point[a];
}


float sum = 0;

float totalpts;

 for (int j = 0; j < a; j++)

    {

totalpts = craditHr[j] * point[j];

sum += totalpts;

}
float totCrhr = 0;

for (int k = 0; k < a; k++)

    {

totCrhr += craditHr[k];

}
cout << "\n\n\nTotal Points:" << sum << " .  Total Credits:" <<
    totCrhr << endl;

cout << "           Total GPA:" << sum / totCrhr << " ." << endl;
cout<<"____________________________________________\n\n"<<endl;

           int l;
 cout<<"How many semester results do you want input? :";
 cin>>l;
 cout<<"____________________________________________\n\n"<<endl;
 float semrs[l];
 int i;

  for(int i=0;i<l;i++)
 {
 cout<<" Enter Semester "<<i+1<<" Result(GPA):";
 cin>>semrs[i];
  cout<<"\n"<<endl;
   }
float semtot=0;
for(int j=0;j<l;j++)
{
 semtot=semtot+semrs[j];
 }
cout<<"** Your CGPA is "<<semtot/l<<" ****"<<endl;

return 0;

}




