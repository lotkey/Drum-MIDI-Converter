#ifndef KEYS_H
#define KEYS_H

#include <string>
using namespace std;

namespace Keys {
	namespace Kick {
		const string hit = "kick_hit";
		const string adk = "kick_adk";
		const string left = "kick_left";
	}
	
	namespace Hat {
		const string cc = "hat_cc";
		const string tight_edge = "hat_tight_edge";
		const string tight_tip = "hat_tight_tip";
		const string seq = "hat_seq";
		const string ching = "hat_ching";
		const string closed_edge = "hat_closed_edge";
		const string closed_tip = "hat_closed_tip";
		const string loose = "hat_loose";
		const string open0 = "hat_open0";
		const string open1 = "hat_open1";
		const string open2 = "hat_open2";
		const string open3 = "hat_open3";
		const string pedal_close_foot = "hat_pedal_close_foot";
		const string pedal_splash = "hat_pedal_splash";
		const string x_closed = "hat_x_closed";
		const string x_open = "hat_x_open";
	}

	namespace Snare {
		const string hit = "snare_hit";
		const string flam = "snare_flam";
		const string ruff = "snare_ruff";
		const string sidestick = "snare_sidestick";
		const string off = "snare_off";
		const string rimshot = "snare_rimshot";
	}

	namespace Tom {
		const string rack1 = "tom_rack1";
		const string rack1_rimshot = "tom_rack1_rimshot";
		const string rack2 = "tom_rack2";
		const string rack2_rimshot = "tom_rack2_rimshot";
		const string rack3 = "tom_rack3";
		const string rack3_rimshot = "tom_rack3_rimshot";
		const string floor1 = "tom_floor1";
		const string floor1_rimshot = "tom_floor1_rimshot";
		const string floor2 = "tom_floor2";
		const string floor2_rimshot = "tim_floor2_rimshot";
		const string floor3 = "tom_floor3";
	}

	namespace Ride {
		const string tip = "ride_tip";
		const string bell = "ride_bell";
		const string hit = "ride_hit";
		const string mute = "ride_mute";
		const string bow = "ride_bow";
	}

	namespace Cymbal {
		const string crash1_hit = "crash1_hit";
		const string crash1_choke = "crash1_choke";
		const string crash2_hit = "crash2_hit";
		const string crash2_choke = "crash2_choke";
		const string crash3_hit = "crash3_hit";
		const string crash3_choke = "crash3_choke";
		const string crash4_hit = "crash4_hit";
		const string crash4_choke = "crash4_choke";
		const string china1_hit = "china1_hit";
		const string china1_choke = "china1_choke";
		const string china2_hit = "china2_hit";
		const string china2_choke = "china2_choke";
		const string bell1 = "cymbal_bell1";
		const string bell2 = "cymbal_bell2";
		const string splash1_hit = "splash1_hit";
		const string splash1_choke = "splash1_choke";
		const string splash2_hit = "splash2_hit";
		const string splash2_choke = "splash2_choke";
		const string stack1_hit = "stack1_hit";
	}

	namespace Perc {
		const string clap = "clap";
		const string tambourine = "tambourine";
		const string shaker = "shaker";
	}
}

#endif