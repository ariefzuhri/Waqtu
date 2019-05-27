Waqtu Rainmeter Prayer Time Skin
======================================

Features
--------

![](@Resources/Images/sample.png)

This skin basically will parse the prayer times data for the chosen zone code in Malaysia from the [JAKIM](https://www.e-solat.gov.my) website every 24 hours:
- The current prayer time is also highlighted
- The user can choose to view the prayer times in either 12- or 24-hour format
- The developer/maintainer can enable debug mode by setting the variable Debug=1

Requirements
------------

The latest version of Rainmeter 4.3+. Download [Rainmeter](https://rainmeter.net)

Requires Chameleon Rainmeter plugin. Download [Chameleon](https://software.socksthefox.net/chameleon/)

Requires Raleway True-Type font suite. Download [Raleway](https://fonts.google.com/specimen/Raleway)

Installation
------------

1. Extract Waqtu into %USERPROFILE%\Documents\Rainmeter\Skins folder
2. Run Rainmeter and Manage Rainmeter
3. Click Refresh All button if Waqtu is not in the list
4. Expand Waqtu folder, choose the Prayer Time and Hijri Date skin and click Load Skin button

Usage
-----
Using the skin is fairly straightforward. But just in case, refer to Rainmeter's guide on how to install and use a skin.

1. Click on the setting button to edit the URL
2. Find the ZoneCode for your city from the JAKIM website (there is a list in the setting, anyway)
3. Replace the ZoneCode in the setting
4. Right click on the skin and Refresh Skin

License
=======

[Creative Commons Attribution 4.0 International (CC BY-NC-SA 4.0)](https://creativecommons.org/licenses/by-nc-sa/4.0/).

Changelog
---------

**Version 1.5.0 – 27/05/2019**
- Played the alarm sound stored in the @Resources/Sounds folder when the current prayer time updated
- Redesigned the skin layout to take into account the skin dimension
- Redesigned the skin styles
- Properly hidden the database connection notification when there was no Internet connection

**Version 1.4.0 – 26/05/2019**
- Corrected the issue with the current prayer time detection by adding the case for the late isyak when the current time > midnight but the current time < the imsak time
- Applied the Chameleon Rainmeter plugin to blend the styles seamlessly with the current desktop wallpaper

**Version 1.3.0 – 25/05/2019**
- Regression: set DoNotOverrideHiddenNonDebug=1 to hide the debug meters
- Implemented different styles for debug meters and notifications

**Version 1.2.0 – 25/05/2019**
- Corrected the issue with the current prayer time detection by removing the date component from the current time to get the correct timestamp to compare with each prayer time

**Version 1.1.0 – 25/05/2019**
- Corrected the issue with the current time not keep updating
- Corrected the issue with the current prayer time detection
- Introduced notifications about the connection problems
- Made the current hour format persistent on the next reload
- Added more logs for debugging
- Change the folder name Config into @Resources to comply with Rainmeter's recommended location to improve its initial load time

**Version 1.0.0 – 22/05/2019**
- Added to GitHub (forked Adlan Khalidi's Waqtu Rainmeter skin to use the JAKIM Malaysia prayer times database instead)
