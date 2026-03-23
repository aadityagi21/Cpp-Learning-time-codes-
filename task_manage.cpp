#include <iostream>
#include <string>
using namespace std;


int main() {
    cout << "==Task System==\n";
    cout << "1. Add Tasks\n";
    cout << "2. Complete Task\n";
    cout << "3. Show Tasks\n";
    cout << "4. Exit\n\n";
    int i=4;
    int menu,sec_menu;
    string first_task = "No task",
    sec_task = "No task",
    third_task = "No task",
    four_task = "No task",
    fifth_task = "No task";
    
    while(i>0){
        cout<<"Enter your choice :";
        cin>>menu;
        if (menu==1) {
            cout<<"Enter your first task :";
            cin>>first_task;
            cout<<"Enter your second task :";
            cin>>sec_task;
            cout<<"Enter your third task :";
            cin>>third_task;
            cout<<"Enter your fourth task :";
            cin>>four_task;
            cout<<"Enter your fifth task :";
            cin>>fifth_task;
        }
        else if(menu==2){
            cout<<first_task<<endl;
            cout<<sec_task<<endl;
            cout<<third_task<<endl;
            cout<<four_task<<endl;
            cout<<fifth_task<<endl;
            int c=1;
            while(c<=5){
                c++;
                cout<<"Enter the task no. which you have done or else write '0' to exit :=";
                cin>>sec_menu;
                if(sec_menu==1){
                    first_task="Task done";
                }
                else if(sec_menu==2){
                    sec_task="Task done";
                }
                else if(sec_menu==3){
                    third_task="Task done";
                }
                else if(sec_menu==4){
                    four_task="Task done";
                }
                else if(sec_menu==5){
                    fifth_task="Task done";
                }
                else if(sec_menu==0){
                    break;
                }
            }

            
        }
        else if(menu==3){
                cout<<first_task<<endl;
                cout<<sec_task<<endl;
                cout<<third_task<<endl;
                cout<<four_task<<endl;
                cout<<fifth_task<<endl;
        }
        else if(menu==4){
            break;
        }
        else{
            cout<<"enter a valid thing";
        }
        
    }

    return 0;
}
