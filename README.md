### Sunfonder Ubuntu Snappy APP for Raspberry Pi 2 Model B
----------------------------------------------------------------------

#### About the APP:
This is the first ubuntu snappy app for Raspberry Pi 2 Model B. 
You can read/write GPIO with the APP. If you want to use the APP, a Raspberry Pi 2 Model B that Ubuntu Snappy Core system installed is necessary.

-----------------------------------------------------------------------
#### About SunFounder:
SunFounder is a technology company focused on Raspberry Pi and Arduino open source community development. Committed to the promotion of open source culture, we strives to bring the fun of electronics making to people all around the world and enable everyone to be a maker. Our products include learning kits, development boards, robots, sensor modules and development tools. In addition to high quality products, SunFounder also offers video tutorials to help you make your own project. If you have interest in open source or making something cool, welcome to join us!

-----------------------------------------------------------------------
#### Usage:
Step 1 : Build environment for the development for Snappy APP on the Ubuntu system(PC, Version >= 14.04)

	 $ sudo add-apt-repository ppa:snappy-dev/beta
	 $ sudo apt-get update
	 $ sudo apt-get upgrade
	 $ sudo apt-get install snappy-tools bzr
	 $ sudo apt-get install gcc-arm-linux-gnueabi

Step 2 : Clone our app source code from github

	 $ git clone https://github.com/sunfounder/Sunfounder_Snappy_APP.git

Step 3 : Compile source code and create snappy app

	 $ cd Sunfounder_Snappy_APP/sunfounder/
	 $ sudo ./create.sh

Wait a moment, you will get a snappy app named sunfounder_0.0.3_armhf.snap under the Sunfounder_Snappy_APP/sunfounder directory.

Step 4 : Remotely copy the app you just create to a Raspberry Pi that ubuntu snappy core system installed

	 $ scp sunfounder_0.0.3_armhf.snap ubuntu@192.168.0.188:/tmp(Replace "192.168.0.188 to your Raspberry pi's IP address")

Step 5 : Log in Raspberry Pi by ssh
	
	 $ ssh ubuntu@192.168.0.188(Replace the IP address to yours)

Step 6 : Install the app

	 $ cd /tmp
	 $ sudo snappy install --allow-unauthenticated sunfounder_0.0.3_armhf.snap

#### Contact us:
website: www.sunfounder.com

E-mail: support@sunfounder.com
