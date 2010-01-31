#!/bin/sh
# Copyright © 2010 Lionel Le Folgoc <mrpouit@ubuntu.com>

# Simple script to add some fancy stuff to gdm

# if not present in xdg-gdm, uses the default config
export XDG_CONFIG_DIRS="/usr/share/xubuntu/xdg-gdm:/etc/xdg/xdg-xubuntu"

# Xfconf
if [ -x /usr/lib/xfconfd ]; then
    exec /usr/lib/xfconfd
fi

# Settings manager
if [ -x /usr/bin/xfsettingsd ]; then
    exec /usr/bin/xfsettingsd
fi

# Window manager
if [ -x /usr/bin/xfwm4 ]; then
    exec /usr/bin/xfwm4
fi

# Desktop manager
if [ -x /usr/bin/xfdesktop ]; then
    exec /usr/bin/xfdesktop
fi

# and finally, power manager
if [ -x /usr/bin/xfce4-power-manager ]; then
    exec /usr/bin/xfce4-power-manager
fi
