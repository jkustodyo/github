#!/bin/bash

# Arquivo de saída
ARQUIVO_SAIDA="/tmp/ip_local.txt"

# Captura o primeiro IP IPv4 global
# ip addr show: lista interfaces
# grep inet: filtra linhas com IP IPv4
# grep -v 127.0.0.1: exclui loopback
# grep -v 169.254: exclui IPs link-local (geralmente não são o IP principal de rede)
# head -n 1: pega apenas o primeiro resultado
# awk '{print $2}': extrai apenas o IP (remove a máscara, ex: /24)
# cut -d/ -f1: garante que não sobe a máscara se o awk não a remover
IP_LOCAL=$(ip addr show | grep -w inet | grep -v 127.0.0.1 | grep -v 169.254 | head -n 1 | awk '{print $2}' | cut -d/ -f1)

# Verifica se o IP foi encontrado
if [ -n "$IP_LOCAL" ]; then
    echo "$IP_LOCAL" > "$ARQUIVO_SAIDA"
    echo "IP local salvo em: $ARQUIVO_SAIDA"
    cat "$ARQUIVO_SAIDA"
else
    echo "Nenhum IP local encontrado."
fi

