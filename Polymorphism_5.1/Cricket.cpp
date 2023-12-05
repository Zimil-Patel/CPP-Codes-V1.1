#include<iostream>
using namespace std;


class Cricket
{
	protected :
		int overs = 0;
	public:
		void getTotalovers()
		{
			cout << endl << "Called in cricket class (Overs) : " << overs <<
					endl;;
		}
};


class T20Match : public Cricket
{
	public:
		void getTotalOvers()
		{
			overs=20;
			cout << endl << "Called in T20 class (Overs) : " << overs <<
					endl;
		}
};


class ODIMatch : public Cricket
{
	public:
		void getTotalOvers()
		{
			overs=50;
			cout << endl << "Called in ODI class (Overs) : " << overs <<
					endl;
        }
};


int main()
{
	T20Match ipl;
	ODIMatch worldCup;
	ipl.getTotalOvers();
	worldCup.getTotalOvers();
	
	return 0;
}