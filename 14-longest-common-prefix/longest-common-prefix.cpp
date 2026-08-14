#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Sécurité si le vector est vide
        if (strs.empty()) return "";

        // On parcourt chaque lettre du 1er mot (strs[0])
        for (int i = 0; i < strs[0].size(); i++) {
            char lettre = strs[0][i]; // La lettre qu'on vérifie

            // On compare cette lettre avec tous les autres mots du vector
            for (int j = 1; j < strs.size(); j++) {
                // Si l'autre mot est trop court OU si la lettre ne correspond pas
                if (i >= strs[j].size() || strs[j][i] != lettre) {
                    // .substr(0, i) coupe et renvoie le mot du début jusqu'à l'index i
                    return strs[0].substr(0, i);
                }
            }
        }

        // Si tout correspond parfaitement, le 1er mot complet est le préfixe
        return strs[0];
    }
};