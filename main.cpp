#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

// Made by Ahmed Qureshi.
int main()
{
    priority_que<int> pq;
    int x3y385z, x234z72;
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"Priority Queue Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element into the Priority Queue"<<endl;
        cout<<"2.Delete Element from the Priority Queue"<<endl;
	cout<<"3.Size of the Priority Queue"<<endl;
        cout<<"4.Top Element of the Priority Queue"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>x3y385z;
        switch(x3y385z)
        {
        case 1:
            cout<<"Enter value to be inserted: ";
            cin>>x234z72;
            pq.push(x234z72);
            break;
        case 2:
            x234z72 = pq.top();
            if (!pq.empty())
            {
                pq.pop();
                cout<<"Element "<<x234z72<<" Deleted"<<endl;
            }
            else
            {
                cout<<"Priority Queue is Empty"<<endl;
            }
            break;
        case 3:
            cout<<"Size of the Queue: ";
	    cout<<pq.size()<<endl;
            break;
        case 4:
            cout<<"Top Element of the Queue: ";
            cout<<pq.top()<<endl;
            break;
        case 5:
            exit(1);
	    break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}
