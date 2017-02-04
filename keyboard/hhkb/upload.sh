#!/bin/sh

sudo dfu-programmer atmega32u4 erase --force && sudo dfu-programmer atmega32u4 flash hhkb_rn42.hex && sudo dfu-programmer atmega32u4 reset
