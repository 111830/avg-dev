export module airline_ticket;
import std;

export class AirlineTicket{
	private:
		std::string m_passengerName;
		int m_numberOfMiles;
		bool m_hasEliteSuperRewardsStatus;
	public:
		AirlineTicket();
		~AirlineTicket(); 

		double calculatePriceInDollars();

		std::string getPassengerName();
		void setPassengerName(std::string name);

		int getNumberOfMiles();
		void setNumberOfMiles(int miles);

		bool hasEliteSuperRewardsStatus();
		void setHasEliteSuperRewardsStatus(bool status);

};
