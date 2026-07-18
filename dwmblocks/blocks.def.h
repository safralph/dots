static const Block blocks[] = {
    /*Icon*/    /*Command*/                                         /*Update Interval*/    /*Update Signal*/
    { "",       "~/.local/src/dots/scripts/statusbar/musicplaying",              1,                     11 },
    { "  ",     "~/.local/src/dots/scripts/statusbar/battery",                   20,                    0  },
    { "  ",     "~/.local/src/dots/scripts/statusbar/ramstats",                  5,                     0  },
    { "  ",     "~/.local/src/dots/scripts/statusbar/timedate",                  60,                    0  },
};

static char delim[] = " | ";
static unsigned int delimLen = 5;
