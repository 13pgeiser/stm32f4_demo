STM32F429discovery with cmake and GCC
######################################

:date: 2020-07-31 14:00
:modified: 2020-07-31 14:00
:tags: stm32, cmake
:authors: Pascal Geiser
:summary: Minimal toolchain for STM32F429 on both Windows and Linux.

.. contents::

https://www.st.com/en/evaluation-tools/32f429idiscovery.html

Windows
*******

|appveyor-badge|

.. |appveyor-badge| image:: https://ci.appveyor.com/api/projects/status/h920fdua2oyidnce/branch/master?svg=true
              :target: https://ci.appveyor.com/project/13pgeiser/stm32f4-demo/branch/master


Install:
 * `ST-LINK utility <https://www.st.com/en/development-tools/stsw-link004.html>`__
 * `Git for windows <https://git-scm.com/download/win>`__

Once installed:
 * right-click on a folder you want to use as a basis and select "Git Bash Here".

Linux
*****

|travis-badge|

.. |travis-badge| image:: https://api.travis-ci.org/13pgeiser/stm32f4_demo.svg?branch=master
              :target: https://travis-ci.org/github/13pgeiser/stm32f4_demo

Install st-flash and git
 * On debian: *sudo apt-get install stlink-tools git*

Once installed:
 * Open a terminal where you want the folder to be located.

Common steps
************

To build the minimal demonstration:
 * Clone the repository and jump in *stm32f4_demo* folder
 * Run *./configure.sh* : this will download and install gcc, astyle, cppcheck
 * Run *source sourceme* : this will add the tools in your PATH.
 * Build *make -j*
 * Upload to the target: *make run*

To clean everything:
 * *make mrproper*

