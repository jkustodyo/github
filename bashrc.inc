#----[.bashrc=1.0.0]--------------------------------------

# diversas orientações
# gooogle---> linux bash como mudar a cor do nome de diretorios exibidos no ls
# ~/.dircolors
# DIR 01;31

alias llzz="ls -l | awk '{k=0;for(i=0;i<=9;i++){if(substr(\$1,i+1,1)~/[rwx]/) k+=2^(9-i)};if(k>0) printf(\"%0o \",k);print}' | while read line; do echo -e \"\033[0;32m$(echo "$line" | cut -d' ' -f6-8)\033[0m $(echo "$line" | cut -d' ' -f9-)\"; done"

#alias ls='ls --color=auto --time-style="+%Y-%m-%d" --color=always'

alias sdwr='sudo shutdown -r now'
alias sdw0='sudo shutdown 0 now'
alias sdw0i='sudo systemctl poweroff -i'
alias blku='cd ~/&&echo $PWD'

alias blk='sudo lsblk|grep -v loop'

alias dfx='df -Th -x squashfs'

alias vpn='sudo snx-rs -s vpn2.tjrj.jus.br -u josecustodio -o vpn_AzureVPN_RemoteAccess -e ssl -X true'
alias pdi='cd ~/Downloads/data-integration & ./spoon.sh &'

alias e='exit'

alias s12='ssh porteiro@10.0.0.12'
alias s30='ssh user1lock@10.0.0.30'
#alias s4='ssh user1lock@10.0.4.4'

#PS1="\n[\$(date +'%Y-%m-%d %H:%M:%S') -- máquina[$(hostname)] IP(s):$(hostname -I) \w]\n\$ "
PS1="\n$(date +'%Y-%m-%d %H:%M:%S, %A'), máq[$(hostname)] $(hostname -I) [\w]\n\$ "

alias auto='nano /home/user1lock/.bashrc'


alias dsk3='sudo mount /dev/sdc3 /mnt/sdc3'
alias dsk6='sudo mount /dev/sdd6 /mnt/sdd6'


alias p49='ping 192.168.34.49'

alias blkk='sudo lsblk|grep -v loop|grep " disk"'



