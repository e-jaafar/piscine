#!/bin/bash

# Définition des informations pour le header
AUTHOR="jael-m-r"
EMAIL="jael-m-r@student.s19.be"
DATE=$(date +"%Y/%m/%d %H:%M:%S")

# Largeur fixe pour le nom du fichier
FILENAME_MAX_LENGTH=42

# Fonction pour générer un header bien aligné
generate_header() {
    local filename="$1"
    local trimmed_name=${filename:0:$FILENAME_MAX_LENGTH}  # Tronquer si trop long
    local spaces=$(( FILENAME_MAX_LENGTH - ${#trimmed_name} ))  # Espaces nécessaires
    local padding=$(printf "%-${spaces}s" " ")  # Ajout des espaces

    cat <<EOF
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   $trimmed_name$padding:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: $AUTHOR <$EMAIL>         +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: $DATE by $AUTHOR          #+#    #+#            */
/*   Updated: $DATE by $AUTHOR          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
EOF
}

# Boucle sur tous les fichiers .c du dossier courant
for file in *.c; do
    if [ -f "$file" ]; then
        temp_file=$(mktemp)  # Fichier temporaire

        # Générer le header et l'écrire dans le fichier temporaire
        generate_header "$file" > "$temp_file"
        echo "" >> "$temp_file"  # Ajouter une ligne vide après le header

        # Ajouter le contenu original du fichier après le header
        cat "$file" >> "$temp_file"

        # Remplacer le fichier original par le fichier temporaire
        mv "$temp_file" "$file"

        echo "✅ Header ajouté à : $file"
    fi
done

