


#----------------------------------------------------------------------------


alias sdwr='sudo shutdown -r now'
alias sdw0='sudo shutdown 0 now'
alias blku='cd ~/&&echo $PWD'

alias blk='sudo lsblk|grep -v loop'

alias dfx='df -Th -x squashfs'

alias vpn='sudo snx-rs -s vpn2.tjrj.jus.br -u josecustodio -o vpn_AzureVPN_RemoteAccess -e ssl -X true'
alias pdi='cd ~/Downloads/data-integration & ./spoon.sh &'

alias e='exit'


alias s12='ssh porteiro@10.0.0.12'
#alias s30='ssh user1lock@10.0.0.30'


PS1="\n[\$(date +'%Y-%m-%d %H:%M:%S') -- máquina[$(hostname)] IP(s):$(hostname -I)  $($PWD) \w]\n\$ "


alias zz='cd /mnt/c/Users/user1/Downloads/down/projetos/linux/script/python/tocador2'
alias z2='cd /mnt/c/Users/user1/Downloads/down/projetos/linux/script/python/tocador\ mp3'

alias zz='/mnt/c/Users/user1/OneDrive/NUVEM/DESKTOP-69ELJDK/down/projetos/linux/script/python/tocador2'

alias d0='sudo docker ps -a --format "table {{.ID}}\t{{.Names}}\t{{.State}}\t{{.Command}}\t{{.Ports}}"'

alias pj='cd /mnt/c/Users/user1/OneDrive/NUVEM/DESKTOP-69ELJDK/down/projetos'

alias ac='sudo cat ~/.bashrc'
alias autoexec='sudo nano ~/.bashrc'
alias lh='ls -lh'

alias auto='sudo nano ~/.bashrc'

alias sdwr='sudo shutdown -r now'
alias sdw0='sudo shutdown 0 now'
alias blk='cd ~/&&echo $PWD&&sudo lsblk|grep -v loop'



#PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$'
#PS1='${__ [+($debian_chroot)] __}\$'

#PS1="\n[\$(date +'%Y-%m-%d %H:%M:%S') -- máquina[$(hostname)] IP(s):$(hostname -I)  --($($PWD))-- \w]\n${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$"


#retirar a cor azul
#PS1="\n\$(date +'%Y-%m-%d %H:%M:%S'), IP(s):$(hostname -I)  [\w]\n${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ "
# PS1="\n\$(date +'%Y-%m-%d %H:%M:%S'), IP(s):$(hostname -I)  [\w]\n${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w $ "

# PS1="\n\$(date +'%Y-%m-%d %H:%M:%S'), IP(s):$(hostname -I)  [\w]\n${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\n$ "

PS1="\n\$(date +'%Y-%m-%d %H:%M:%S'), IP(s):$(hostname -I)  [\w]\n${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ "


PS1="\n$(date +'%Y-%m-%d %H:%M:%S, %A'), máquina[$(hostname), $(hostname -I) [\w]\n\$ "


alias mntd='sudo mount /dev/sdd6 /mnt/sdd6'
alias mntc='sudo mount /dev/sdc3 /mnt/sdc3'




