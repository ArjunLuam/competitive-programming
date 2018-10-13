#include<iostream>
using namespace std;
int stack[5],top=-1;
int ch,item;
void push(int);
int isfull(void);
int isempty();
void pop();

int main()
{
    int i;

    while(1)
    {

        cout<<"1.push \n";
        cout<<"2.pop \n";
        cout<<"Enter your choice: ";
        cin>>ch;

        if(ch==1)
        {
            cout<<"Enter the element to be pushed \n";
            cin>>item;
            push(item);

            for (i=0;i<=top;i++){
                cout<<stack[i];
                cout<<"\n";
        }
}

       else{
            pop();
        for (i=0;i<=top;i++){
        cout<<stack[i];
       cout<<"\n";
        }

       }
    }

        return 0;
}
void push(int ele){

if(isfull()){

    cout<<"overflow \n";

}
else{

    top++;
    stack[top]=item;
}

}

int isfull(){

if(top==4){

    return 1;
}
else{
    return 0;
}
}

void pop(){

int ele;
if(isempty()){

    cout<<"Underflow";
}
else{
    ele=stack[top];
    top--;
}

}
int isempty(){

if(top==-1){

    return 1;


}else{


return 0;

}

}






