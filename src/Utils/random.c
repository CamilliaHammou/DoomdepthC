/* ********************************************************************************************************* */
/*                                                                                                           */
/*                                                              :::::::::: ::::::::   :::::::: :::::::::::   */
/*   random.c                                                  :+:       :+:    :+: :+:    :+:    :+:        */
/*                                                            +:+       +:+        +:+           +:+         */
/*   By: camillia <chammou1@myges.fr>                        +#++:++#  +#++:++#++ :#:           +#+          */
/*                                                          +#+              +#+ +#+   +#+#    +#+           */
/*   Created: 2023/09/30 18:05:13 by camillia              #+#       #+#    #+# #+#    #+#    #+#            */
/*   Updated: 2023/09/30 18:05:13 by camillia             ########## ########   ######## ###########         */
/*                                                                                                           */
/* ********************************************************************************************************* */

#include "Doomdepths.h"

void my_random() {
    srand(time(NULL));
}

int my_random_monsters() {
    return (rand() % 3) + 1; //+ 1 pour que sa soit bien entre 1 et 3 sinon sa serai que de 0 et 3
}