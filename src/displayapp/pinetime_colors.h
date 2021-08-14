#ifndef PINETIME_COLORS_H
#define PINETIME_COLORS_H

// PINETIME COLORS for InfiniTime
// 
// @WIP
// Description:
// This file acts as central point for setting all colors
// in the InfiniTime app. 
// It holds definitions for all colors used in various screens/widgets
// This way, if one wishes to customize the look of the PineTime,
// all what needs to be done is changing the color hex values in here.
// 
// Still work in progress
// 
// Steps:
// - find all occurences of LV_COLOR_[colorname] and the lv_color_hex()
// - create defines for all colors with human-readable names, so it is easy
//      to assign the #define to the specific widget
// - create proper #include structure, so this file can be easily included
//      where it needs to be used, add this file to the CMAKE build system
// - replace all occurences of LV colors with the new defines

// Includes
#include <displayapp/DisplayApp.h>

// Color definitions
// Notifications screen
#define PT_COLOR_NOTIFI_FONT_TITLE          LV_COLOR_MAKE(0x11, 0xff, 0x11)
#define PT_COLOR_NOTIFI_FONT_CALL           PT_COLOR_NOTIFI_FONT_TITLE
#define PT_COLOR_NOTIFI_CALL_BTN_DECLINE_BG LV_COLOR_MAKE(0xff, 0x11, 0x22)
#define PT_COLOR_NOTIFI_CALL_BTN_ACCEPT_BG  LV_COLOR_MAKE(0x11, 0xff, 0x22)
#define PT_COLOR_NOTIFI_CALL_BTN_MUT_BG     LV_COLOR_MAKE(0x22, 0x22, 0x22)
#define PT_COLOR_NOTIFI_CONTAINER1_BG       LV_COLOR_MAKE(0x22, 0x22, 0x22)
#define PT_COLOR_NOTIFI_MSG_TEXT            LV_COLOR_MAKE(0xdd, 0xdd, 0xdd)
#define PT_COLOR_NOTIFI_TIMEOUT_LINE        LV_COLOR_WHITE


#endif // PINETIME_COLORS_H