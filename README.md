# Custom dwm statusbar

Table of Contents
=================
* [Dwmblocks](#Dwmblocks)
* [Usage](#Usage)
* [Modifying blocks](#Modifying-blocks)
* [Notes](#Notes)

# Dwmblocks

Modular status bar for dwm written in c.

# Usage

To use dwmblocks first run `make` and then install it with `sudo make install`.
After that you can put dwmblocks in your xinitrc or other startup script to have it start with dwm.

# Modifying blocks

The statusbar is made from text output from commandline programs. Blocks are added and removed by editing the blocks.h header file. By default the blocks.h header file is created the first time you run make which copies the default config from blocks.def.h. This is so you can edit your status bar commands and they will not get overwritten in a future update.

# Notes

As of now, I am using scripts for i3blocks from [i3blocks-contrib](https://github.com/KostasEreksonas/i3blocks-contrib) to extend the dwmblocks. Later I plan to make my own custom scripts for the status bar.

# Scripts

As of now, these scripts are used:
1. [CPU usage](../main/scripts/cpu_usage) - a script to monitor cpu usage.
