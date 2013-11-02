//---------------------------------------------------------------------------//
//Description: In charge of EventHeader
//Author: Wu Chen(wuchen@mail.ihep.ac.cn)
//Created: 17 Oct, 2012
//Comment:
//---------------------------------------------------------------------------//

#ifndef EventHeaderSvc_h
#define EventHeaderSvc_h 1

#include "globals.hh"

class G4Event;

class EventHeaderSvc
{
	public:
		EventHeaderSvc();
		~EventHeaderSvc();

		static EventHeaderSvc* GetEventHeaderSvc();

		void SetBranch();

		void ReadOutputCard(G4String filename);

		void SetValue(const G4Event* evt, int runNb = 0);

		void SetSeedsValue();

		//=> Modify
		void set_run_num(int val){run_num = val;};
		void set_evt_num(int val){evt_num = val;};
		void set_R0(double val){R0 = val;};
		void set_R1(double val){R1 = val;};

	private:

		void ReSet();

		void ShowOutCard();

		static EventHeaderSvc* fEventHeaderSvc;

		int run_num;
		int evt_num;
		double R0;
		double R1;

		bool flag_run_num;
		bool flag_evt_num;
		bool flag_R0;
		bool flag_R1;
};

#endif

