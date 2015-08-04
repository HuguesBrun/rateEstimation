#!/bin/csh

#setenv EOSpath /store/group/phys_muon/hbrun/HLTtest/50nsRates/rateForCommissioning50nsMenuBis/$1
setenv EOSpath /store/group/phys_muon/hbrun/HLTtest/july2015_25nsrate/$1 
set list = `cmsLs $EOSpath | grep root | awk '{ print $5 }'`
mkdir /tmp/hbrun/$1

foreach i ($list)
	echo $i
	set number = `echo $i | awk -F "/" '{ print $9 }' | awk -F "_" '{print $2}'`
	echo $number
	cmsStage $i /tmp/hbrun/$1/fichier_$number.root

end


