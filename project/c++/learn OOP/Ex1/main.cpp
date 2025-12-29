import <print>;
import airline_ticket;
import <string>;
using namespace std;

int main()
{
    AirlineTicket myTicket;
    myTicket.setPassengerName("Renis Ndregjoni");
    myTicket.setNumberOfMiles(700);
    double cost{myTicket.calculatePriceInDollar()};
    println("This ticket will cost {}$", cost);
    return 0;
}
