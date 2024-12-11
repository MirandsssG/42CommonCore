#!/bin/bash

uname -a #prints the architecture of the OS, except if the processor is unknown

grep "physical id" /proc/cpuinfo | wc -l #prints the number of physical processors from the file cpuinfo

grep processor /proc/cpuinfo | wc -l #prints the number of virtual cores from the file cpuinfo

free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}' #prints the percentage of free memory when the line starts
#with "Mem:" dividing the 3rd column(used) with the 2nd column(total) and multiplying it by 100 to get the percentage

df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n", use/total*100)}' #prints the
#percentage of free disk memory filtering the lines that contain /dev and excluding /boot using use(used space) and
#total(total space) and diving total use by total and multiplying by 100 to get a percentage

vmstat | tail -1 | awk '{print $15}' #prints the CPU usage percentage using tail -1 to only display the last line and
#printing the 15 column, which is the CPU usage percentage stat

who -b | awk '$1 == "system" {print $3 " " $4}' #prints the last date and time of last reboot searching for a line that
#contains "system" and only showing the 3rd column(date) and the 4th column(time)


