# STB platform specific configs
OVERRIDES .= ":rdkstb"

DISTRO_FEATURES:append = " RDKE_PLATFORM_STB "
DISTRO_FEATURES:append = " enable_gdb_support "

LINUXLIBCVERSION = "4.9%"
