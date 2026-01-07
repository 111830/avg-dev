import airline_ticket;
import std;

int main(){
	AirlineTicket myTicket;

	myTicket.setPassengerName("Sheman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	myTicket.setHasEliteSuperRewardsStatus(false);

	double cost { myTicket.calculatePriceInDollars() };

	std :: println("This ticket will cost {}$", cost);

	return 0;
}