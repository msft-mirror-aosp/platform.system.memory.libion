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
#include <ion/ion.h>

int ion_open()
{ return -1; }

int ion_close(int)
{ return -1; }

int ion_alloc(int, size_t, size_t, unsigned int,
              unsigned int, ion_user_handle_t *)
{ return -1; }

int ion_alloc_fd(int, size_t, size_t, unsigned int,
              unsigned int, int *)
{ return -1; }

int ion_sync_fd(int, int)
{ return -1; }

int ion_free(int, ion_user_handle_t)
{ return -1; }

int ion_map(int, ion_user_handle_t, size_t, int,
            int, off_t, unsigned char **, int *)
{ return -1; }

int ion_share(int, ion_user_handle_t, int *)
{ return -1; }

int ion_import(int, int, ion_user_handle_t *)
{ return -1; }

/**
  * Add 4.12+ kernel ION interfaces here for forward compatibility
  * This should be needed till the pre-4.12+ ION interfaces are backported.
  */
int ion_query_heap_cnt(int, int*)
{ return -1; }

int ion_query_get_heaps(int, int, void*)
{ return -1; }

int ion_is_legacy(int)
{ return 0; }

int ion_is_using_modular_heaps(int)
{ return 0; }
