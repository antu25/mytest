#include<iostream>
using namespace std;

void show_question(){

    string ans[5];
    string solution[] = {"5","3","angular","spring","node"};
    int point = 0;
       
      cout<<"there are 5 questions. Each have 2 options.  "<<endl; 

      cout<<"1.HTML latest version "<<endl; 
      
      //getline(cin,ans[0]);
      cin >> ans[0];

      cout<<"2.CSS latest version "<<endl; 

      //getline(cin,ans[1]);
      cin >> ans[1];

      cout<<"3.Tell one JS frontend tool "<<endl; 

      //getline(cin,ans[2]);
      cin >> ans[2];

      cout<<"4.Tell one java backend tool "<<endl; 

     // getline(cin,ans[3]);
      cin >> ans[3];

      cout<<"5.Tell one JS backend tool "<<endl; 

     // getline(cin,ans[4]);
      cin >> ans[4];


    for(int i = 0; i < 5 ; i ++){
       
       if(ans[i] == solution[i]){
           cout << "correct"<<endl;
           point++;
       }
        else cout << "incorrect"<<endl;
  
    }
cout << "the total point is "<<point<<endl;

}



int main(){

show_question();


return 0;

}
