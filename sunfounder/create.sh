#!/bin/bash

cd ./src
sudo ./compile.sh
sudo mv led ../bin
sudo mv btnCtrlLed ../bin
sudo mv rgb ../bin
sudo mv buzzer ../bin
sudo mv analogRead ../bin
cd ../
echo Starting ...
sudo snappy build . > log
echo Generated 'sunfounder_0.0.3_armhf.snap' snap
echo done !
