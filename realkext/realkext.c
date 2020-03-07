//
//  realkext.c
//  realkext
//
//  Created by Paul Ciarlo on 3/7/20.
//  Copyright © 2020 paulyc. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t realkext_start(kmod_info_t * ki, void *d);
kern_return_t realkext_stop(kmod_info_t *ki, void *d);

kern_return_t realkext_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t realkext_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
