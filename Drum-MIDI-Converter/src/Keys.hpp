#ifndef KEYS_H
#define KEYS_H

#include <string>

using namespace std;

namespace Keys {
    namespace Cymbal {
        namespace Bell {
            namespace Crash {
                const string crash1_bell = "crash1_bell";
                const string crash2_bell = "crash2_bell";
            }

            namespace Ride {
                const string ride1_bell = "ride1_bell";
                const string ride1_bell_tip = "ride1_bell_tip";
            }
        }

        namespace Choke {
            namespace China {
                const string china1_choke = "china1_choke";
                const string china2_choke = "china2_choke";
            }

            namespace Crash {
                const string crash1_choke = "crash1_choke";
                const string crash2_choke = "crash2_choke";
                const string crash3_choke = "crash3_choke";
                const string crash4_choke = "crash4_choke";
            }

            namespace Ride {
                const string ride1_choke = "ride1_choke";
            }

            namespace Splash {
                const string splash1_choke = "splash1_choke";
                const string splash2_choke = "splash2_choke";
            }
        }

        namespace Hit {
            namespace China {
                const string china1_hit = "china1_hit";
                const string china2_hit = "china2_hit";
            }

            namespace Crash {
                const string crash1_hit = "crash1_hit";
                const string crash2_hit = "crash2_hit";
                const string crash3_hit = "crash3_hit";
                const string crash4_hit = "crash4_hit";
            }

            namespace Ride {
                const string ride1_bow = "ride1_bow";
                const string ride1_tip = "ride1_tip";
                const string ride1_hit = "ride1_hit";
            }

            namespace Splash {
                const string splash1_hit = "splash1_hit";
                const string splash2_hit = "splash2_hit";
            }

            namespace Stack {
                const string stack1_hit = "stack1_hit";
            }
        }
    }

    namespace Hat {
        namespace Closed {
            const string hat_pedal_close_foot = "hat_pedal_close_foot";
            const string hat_tight_edge = "hat_tight_edge";
            const string hat_tight_tip = "hat_tight_tip";
            const string hat_x_closed = "hat_x_closed";
            const string hat_closed_edge = "hat_closed_edge";
            const string hat_closed_tip = "hat_closed_tip";
        }

        namespace Open {
            const string hat_cc = "hat_cc";
            const string hat_ching = "hat_ching";
            const string hat_loose = "hat_loose";
            const string hat_pedal_splash = "hat_pedal_splash";
            const string hat_seq = "hat_seq";
            const string hat_x_open = "hat_x_open";
            const string hat_open0 = "hat_open0";
            const string hat_open1 = "hat_open1";
            const string hat_open2 = "hat_open2";
            const string hat_open3 = "hat_open3";
        }
    }

    namespace Kick {
        const string kick_adk = "kick_adk";
        const string kick_left = "kick_left";
        const string kick_hit = "kick_hit";
    }

    namespace Perc {
        const string clap = "clap";
        const string shaker = "shaker";
        const string tambourine = "tambourine";
    }

    namespace Snare {
        const string snare_flam = "snare_flam";
        const string snare_off = "snare_off";
        const string snare_rimshot = "snare_rimshot";
        const string snare_ruff = "snare_ruff";
        const string snare_sidestick = "snare_sidestick";
        const string snare_hit = "snare_hit";
    }

    namespace Tom {
        namespace Rimshot {
            namespace Floor {
                const string tom_floor1_rimshot = "tom_floor1_rimshot";
                const string tom_floor2_rimshot = "tom_floor2_rimshot";
                const string tom_floor3_rimshot = "tom_floor3_rimshot";
            }

            namespace Rack {
                const string tom_rack1_rimshot = "tom_rack1_rimshot";
                const string tom_rack2_rimshot = "tom_rack2_rimshot";
                const string tom_rack3_rimshot = "tom_rack3_rimshot";
            }
        }

        namespace Hit {
            namespace Floor {
                const string tom_floor1 = "tom_floor1";
                const string tom_floor2 = "tom_floor2";
                const string tom_floor3 = "tom_floor3";
            }

            namespace Rack {
                const string tom_rack1 = "tom_rack1";
                const string tom_rack2 = "tom_rack2";
                const string tom_rack3 = "tom_rack3";
            }
        }
    }
}

#endif