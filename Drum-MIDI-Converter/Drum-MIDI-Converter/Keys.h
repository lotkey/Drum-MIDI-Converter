#ifndef KEYS_H
#define KEYS_H

#include <string>
using namespace std;

namespace Keys {
	const string Kick = "kick";
	
	namespace Hat {
		const string tight = "hat_tight";
		const string ching = "hat_ching";
		const string closed = "hat_closed";
		const string closed_loose = "hat_closed_loose";
		const string open0 = "hat_open0";
		const string open1 = "hat_open1";
		const string open2 = "hat_open2";
		const string open3 = "hat_open3";
		const string pedal_chick = "hat_pedal_chick";
	}

	namespace Snare {
		const string hit = "snare_hit";
		const string flam = "snare_flam";
		const string ruff = "snare_ruff";
		const string sidestick = "snare_sidestick";
		const string off = "snare_off";
	}

	namespace Tom {
		const string rack = "tom_rack";
		const string floor1 = "tom_floor1";
		const string floor2 = "tom_floor2";
	}

	namespace Ride {
		const string tip = "ride_tip";
		const string bell = "ride_bell";
		const string hit = "ride_hit";
	}

	namespace Crash {
		namespace L {
			const string hit = "crashL_hit";
			const string choke = "crashL_choke";
		}
		namespace R {
			const string hit = "crashR_hit";
			const string choke = "crashR_choke";
		}
	}

	namespace China {
		const string hit = "china_hit";
		const string choke = "china_choke";
	}

	namespace Splash {
		const string hit = "splash_hit";
		const string choke = "splash_choke";
	}
}

#endif