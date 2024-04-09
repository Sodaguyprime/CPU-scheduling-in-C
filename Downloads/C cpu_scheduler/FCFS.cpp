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

int linked_data(){
    struct Node
{
    int data;
    Node *next;
};
typedef Node* nodeptr;
nodeptr head;
head = new Node();
head ->data = 20;
head ->next = NULL;




return head->data;
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


    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"|*---------------------FCFS SCHEDULING---------------------*|"<<endl;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"|*---------------------------------------------------------*|"<<endl;
    cout<<"The Burst time,Arrival time and Priority for the proccess are at follows:"<<endl;
    int totalnumber = howmanyprocess();
    cout<<"The number of processes:  "<<totalnumber<<endl;
    totalnumber = linked_data();
    cout<<"The number of processes:  "<<totalnumber<<endl;


}