/*
 *  ion.c
 *
 * Memory Allocator functions for ion
 *
 *   Copyright 2011 Google, Inc
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __SYS_CORE_ION_H
#define __SYS_CORE_ION_H

#include <sys/types.h>
#include <linux/ion.h>

__BEGIN_DECLS

struct ion_handle;

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_open();

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_close(int);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_alloc(int, size_t, size_t, unsigned int,
              unsigned int, ion_user_handle_t *);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_alloc_fd(int, size_t, size_t, unsigned int,
              unsigned int, int *);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_sync_fd(int, int);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_free(int, ion_user_handle_t);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_map(int, ion_user_handle_t, size_t, int,
            int, off_t, unsigned char **, int *);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_share(int, ion_user_handle_t, int *);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_import(int, int, ion_user_handle_t *);

/**
  * Add 4.12+ kernel ION interfaces here for forward compatibility
  * This should be needed till the pre-4.12+ ION interfaces are backported.
  */
[[deprecated("This function will always fail! ION is not supported.")]]
int ion_query_heap_cnt(int, int*);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_query_get_heaps(int, int, void*);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_is_legacy(int);

[[deprecated("This function will always fail! ION is not supported.")]]
int ion_is_using_modular_heaps(int);

__END_DECLS

#endif /* __SYS_CORE_ION_H */
