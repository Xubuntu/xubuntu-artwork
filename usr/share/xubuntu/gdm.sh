#!/bin/sh
# Copyright © 2010 Lionel Le Folgoc <mrpouit@ubuntu.com>

# Simple script to add some fancy stuff to gdm

# if not present in xdg-gdm, uses the default config
export XDG_CONFIG_DIRS="/usr/share/xubuntu/xdg-gdm:/etc/xdg/xdg-xubuntu:/etc/xdg"

# Xfconf
if [ -x /usr/lib/xfce4/xfconf/xfconfd ]; then
    /usr/lib/xfce4/xfconf/xfconfd &
fi

# Window manager
if [ -x /usr/bin/xfwm4 ]; then
    /usr/bin/xfwm4 &
fi

# and finally, power manager
if [ -x /usr/bin/xfce4-power-manager ]; then
    /usr/bin/xfce4-power-manager &
fi
