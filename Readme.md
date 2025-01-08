# Configuration du Makefile sur Visual Studio Code

Ce guide explique comment configurer et utiliser un Makefile dans Visual Studio Code pour compiler et exécuter un projet C++.


## Avant toute chose configurer Vscode
Aller dans la barre d'état, Taille des Tabulatons, puis option "Mettre en retrait avec des tabulations"
Selectionner le nombre qui vous convient et enregistrer.
![Img1](img/Tab0.png)
![Img2](img/Tab1.png)
![Img3](img/Tab2.png)

Vous pouvez aussi supprimer et resaisir de A à Z votre Makefile.

## Étape de Création du Makefile

Créez un fichier nommé `Makefile` dans le répertoire racine de votre projet et ajoutez-y le contenu suivant :

```makefile
# Fichiers sources
SRCS = main.cxx Message.cxx

# Nom de l'exécutable
TARGET = bg

# Commande de compilation
all:
    g++ $(SRCS) -o $(TARGET)

# Nettoyage des fichiers temporaires
clean:
    rm -f $(TARGET)

# Exécution du programme
run:
    ./$(TARGET)

