// You are using GCC
#include<iostream>
using namespace std;

class Ticket {
    private:
        int ticketId;
    public:
        int isCanceled = 0;
        void setTicket(int x) {
            ticketId = x;
        }
        int getTicketId() {
            return ticketId;
        }
        void print() {
            cout<<"Status: "<<isCanceled<<" Ticket ID: "<<ticketId<<endl;
        }
        void show() {
            if(isCanceled == 0){
                cout<<ticketId<<" ";
            }
        }
        void cancelTicket() {
            isCanceled = 1;
        }
};

class Reservation {
    private:
        Ticket reservedTickets[25];
        friend void cancelReservation(Reservation&, const Ticket&);
    public:
        void setReserved(int N) {
            for(int i=0; i<N; i++) {
                int a;
                cin>>a;
                reservedTickets[i].setTicket(a);
            }
        }
        void showTicket(int N) {
            cout<<"Reserved Tickets: ";
            for(int i=0; i<N; i++) {
                if(reservedTickets[i].isCanceled == 0) {
                    cout<<reservedTickets[i].getTicketId()<<" ";
                }
            }
            cout<<endl;
        }
        void cancelTicket(int N, int id) {
            int found = 0;
            for(int i=0; i<N; i++) {
                if(reservedTickets[i].getTicketId() == id){
                    found = 1;
                    reservedTickets[i].cancelTicket();
                };
            }
            found ? cout<<"Ticket with ID "<<id<<" has been cancelled" : cout<<"Ticket with ID "<<id<<" not found in the reservation";
            cout<<endl;
        }
};

void cancelReservation(Reservation&, const Ticket&){
    cout<<"Go through this question";
};

int main() {
    int N;
    cin>>N;
    Reservation obj;
    obj.setReserved(N);
    int ticketId;
    cin>>ticketId;
    obj.showTicket(N);
    obj.cancelTicket(N,ticketId);
    obj.showTicket(N);
    return 0;
}