#include <iostream>
using namespace std;

int main()
{
    
  	string name;
  	cout << "You are an ordinary office worker"<< endl;
  	cout << "And you suddenly want to go abroad"<< endl;
  	cout << "there are 4 countries you want to visit"<< endl;
  	cout << "You are choosing the first country to go"<< endl<<endl;
    int state = 0; 	//起始狀態 
    int input;		//輸入 
    while(1)
    {
        switch(state)
        {
            case 0://狀態 0:出國
                cout << "Travel location"<< endl;
                cout << "If you want a cheaper one, please enter 1" << endl; 
                cout << "If you want expensive, please enter 2" << endl; 
                cout << "Input : ";
                cin >> input; //讀取輸入 
                if(input == 1)
                {
                    state = 1; //狀態變換 
                }
                else if(input==2)
                {
                    state = 2;
                }
                break;
        
            case 1://狀態 2:便宜 
                cout << "You have chosen a cheap one, then you have to choose a location"<< endl;
                cout << "If you want to go to Vietnam, please enter 1" << endl; 
                cout << "if you want to go to Japan, please enter 2" << endl;
                cout << "If you want to change to a expensive one, please press 3" << endl;
                cout << "Input : ";
                cin >> input;
                if(input == 1)
                {
                    state = 3;
                }
                else if(input == 2)
                {
                    state = 4;
                }   
                else if(input==3)
                {
                    state=2;
                }
                break;
                
            
            case 2://狀態 3: 昂貴
                cout << "You have chosen a expensive one, then you have to choose a location"<< endl;
                cout << "If you want to go to U.S.A, please enter 1" << endl; 
                cout << "If you want to go to France, please enter 2" << endl; 
                cout << "If you want to change to a cheaper one, please press 3" << endl;
                cout << "Input : ";
                cin >> input;
                if(input == 1)
                {
                    state = 5;
                }
                else if(input == 2)
                {
                    state = 6;
                }
                 else if(input == 3)
                {
                    state = 1;
                }   
                
                break;
                
            case 3://狀態 3: 去越南
                cout << "If you are sure you want to go to Vietnam, please enter 1"<< endl;
                cout << "If you want to reselect all, please enter 2" << endl; 
                cout << "If you want to change to travel to Japan, please enter 3" << endl;
                cout << "Input : ";
                cin >> input;
                if(input == 1)
                {
                    state = 7;
                }
                else if(input == 2)
                {
                    state = 0;
                }
                else if(input == 3)
                {
                    state = 4;
                }                
                break;
                
            case 4://狀態 4: 去日本
                cout << "If you are sure you want to go to Japan, please enter 1"<< endl;
                cout << "If you want to reselect all, please enter 2" << endl; 
                cout << "If you want to change to travel to Vietnam, please enter 3" << endl;
                cout << "Input : ";
                cin >> input;
                if(input == 1)
                {
                    state = 7;
                }
                else if(input == 2)
                {
                    state = 0;
                }
                else if (input == 3)
                {
                    state = 3;
                }
                break;
                
            case 5://狀態 5: 去美國
                cout << "If you are sure you want to go to U.S.A, please enter 1"<< endl;
                cout << "If you want to reselect all, please enter 2" << endl; 
                cout << "If you want to change to travel to France, please enter 3" << endl;
                cout << "Input : ";
                cin >> input;
                if(input == 1)
                {
                    state = 7;
                }
                else if(input == 2)
                {
                    state = 0;
                }
                else if (input == 3)
                {
                    state = 6;
                }
                break;
                
            case 6://狀態 6: 去法國
                cout << "If you are sure you want to go to France, please enter 1"<< endl;
                cout << "If you want to reselect all, please enter 2" << endl; 
                cout << "If you want to change to travel to U.S.A, please enter 3" << endl;
                cout << "Input : ";
                cin >> input;
                if(input == 1)
                {
                    state = 7;
                }
                else if(input == 2)
                {
                    state = 0;
                }
                else if (input == 3)
                {
                    state = 5;
                }
                break;
                
            case 7://狀態7: 確定
                cout << "If you are really sure, please enter 1"<< endl;
                cout << "If you regret it again, please enter 2" << endl; 
                cout << "Input : ";
                cin >> input;
                if(input == 2)
                {
                    state = 0;
                }
                else if(input == 1)
                {
                    state = 8;
                }   
                break;
            case 8://狀態7: 確定
                
                cout<<"You suddenly find that you have no money to go abroad, so you have to go back and continue to daydream about going abroad."<<endl<<endl;
                if(state == 8)
                {
                    state = 0;
                }
                   
                
                
        }
        cout << endl;
    }
}
