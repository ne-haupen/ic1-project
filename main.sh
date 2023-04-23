#!/bin/bash
cat banners/level_one_banner.txt
echo "Do you wish to show source code for level one?";
select yn in "Yes" "No"; do
    case $yn in
        "Yes") cat levels/level_one.c; break;;
        "No") echo "program starting ..."; break;
    esac
done
./unprotected/exploitable_1
clear
cat banners/level_two_banner.txt
echo "Do you wish to show source code for level two?"
select yn in "Yes" "No"; do
    case $yn in
        "Yes") cat levels/level_two.c; break;;
        "No") echo "program starting ..."; break;
    esac
done
./unprotected/exploitable_2
clear
cat banners/level_three_banner.txt
echo "Do you wish to show source code for level three?"
select yn in "Yes" "No"; do
    case $yn in
        "Yes") cat levels/level_three.c; break;;
        "No") echo "program starting ..."; break;
    esac
done
./unprotected/exploitable_3
clear
cat banners/victory_banner.txt