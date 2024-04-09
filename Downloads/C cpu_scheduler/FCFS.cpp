#include <iostream>
#include <fstream>
using namespace std;

int numberoftotalprocesss = 0 ;

class proccessfromfiles {
    public:
    int proccessnumber;
    int processBursttime;
    int proccessArrivaltime;
    int processPriorty;
};
struct Node
{
    int data;
    Node *next;
};
typedef Node* nodeptr;


void push(nodeptr& head, int data){
    nodeptr tempptr;
    tempptr = new Node;
    tempptr-> data = data;
    tempptr-> next = NULL;
    Node* check;
    check = head;
    
    while (check->next != NULL) {
        check = check->next;
    }

    check->next = tempptr;
}

void Adding_to_list(nodeptr& head){
ifstream ourinput;
    char D;
    ourinput.open("input.txt");
     {
        if(ourinput.fail()){
            cerr<<"Error opening file"<<endl;
        }
    }
    do {
        D = ourinput.get();
        if(D != '\n' || D !=' ' || D !=':'){
        push(head,D);
        }
    }while(ourinput.good());
    ourinput.close();
}


int howmanyprocess(){
    ifstream ourinput;
    char D;
    ourinput.open("input.txt");
    {
        if(ourinput.fail()){
            cerr<<"Error opening file"<<endl;
        }
    }

    do {
        D = ourinput.get();
        if(D == '\n'){
            numberoftotalprocesss++;
        }
    }while(ourinput.good());
    ourinput.close();
    return numberoftotalprocesss;
}



int main(){
nodeptr head;
head = new Node;
head ->data = 20;
head ->next = NULL;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"|*---------------------FCFS SCHEDULING---------------------*|"<<endl;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"The Burst time,Arrival time and Priority for the proccess are at follows:"<<endl;
    int totalnumber = howmanyprocess();
    cout<<"The number of processes:  "<<totalnumber<<endl;
    nodeptr display;
    display = head;
    push(head,22);
    Adding_to_list(head);
while (display != NULL)
{
    cout<<endl<<display->data;
    display = display->next;
}
}