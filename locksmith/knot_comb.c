/* Generated by CIL v. 1.3.2 */
/* print_CIL_Input is true */
typedef unsigned int size_t;
typedef unsigned long long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __off_t;
typedef long long __off64_t;
typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef int __ssize_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct _pthread_fastlock {
   long __status ;
   int __spinlock ;
};
struct _pthread_descr_struct;
typedef struct _pthread_descr_struct *_pthread_descr;
struct __anonstruct_pthread_mutex_t_6 {
   int __m_reserved ;
   int __m_count ;
   _pthread_descr __m_owner ;
   int __m_kind ;
   struct _pthread_fastlock __m_lock ;
};
typedef struct __anonstruct_pthread_mutex_t_6 pthread_mutex_t;
struct __anonstruct_pthread_mutexattr_t_7 {
   int __mutexkind ;
};
typedef struct __anonstruct_pthread_mutexattr_t_7 pthread_mutexattr_t;
typedef __ssize_t ssize_t;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   int _mode ;
   char _unused2[(int )(15U * sizeof(int ) - 2U * sizeof(void *))] ;
};
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   unsigned long __unused4 ;
   unsigned long __unused5 ;
};
struct cache_entry;
typedef struct cache_entry cache_entry;
#pragma existential(cache_entry, "cache_entry.refs_mutex", "&cache_entry.refs")
struct cache_entry {
   char *filename ;
   char *data ;
   ssize_t total ;
   int refs ;
   pthread_mutex_t refs_mutex ;
   cache_entry *next ;
   cache_entry *prev ;
};
typedef unsigned int PRUint32;
typedef unsigned int PRUintn;
typedef int PRIntn;
typedef ssize_t PRSize;
typedef int PRBool;
struct PLHashEntry;
typedef struct PLHashEntry PLHashEntry;
struct PLHashTable;
typedef struct PLHashTable PLHashTable;
typedef PRUint32 PLHashNumber;
struct PLHashAllocOps {
   void *(*allocTable)(void *pool , PRSize size ) ;
   void (*freeTable)(void *pool , void *item ) ;
   PLHashEntry *(*allocEntry)(void *pool , void const   *key ) ;
   void (*freeEntry)(void *pool , PLHashEntry *he , PRUintn flag ) ;
};
typedef struct PLHashAllocOps PLHashAllocOps;
struct PLHashEntry {
   PLHashEntry *next ;
   PLHashNumber keyHash ;
   void const   *key ;
   void *value ;
};
struct PLHashTable {
   PLHashEntry **buckets ;
   PRUint32 nentries ;
   PRUint32 shift ;
/*    PLHashNumber (*keyHash)(void const   *key ) ; */
/*    PRIntn (*keyCompare)(void const   *v1 , void const   *v2 ) ; */
/*    PRIntn (*valueCompare)(void const   *v1 , void const   *v2 ) ; */
/*    PLHashAllocOps const   *allocOps ; */
   void *allocPriv ;
};
struct input_state;
typedef struct input_state input_state;
struct input_state {
   char buf[512] ;
   int used ;
   int valid ;
   int socket ;
};
enum http_version;
typedef enum http_version http_version;
enum http_version {
    HTTP_VERSION_1_0 = 0,
    HTTP_VERSION_1_1 = 1
};
struct http_request;
typedef struct http_request http_request;
struct http_request {
   char url[80] ;
   http_version version ;
   int socket ;
   int closed ;
};
typedef unsigned int __socklen_t;
struct __sched_param {
   int __sched_priority ;
};
struct __pthread_attr_s {
   int __detachstate ;
   int __schedpolicy ;
   struct __sched_param __schedparam ;
   int __inheritsched ;
   int __scope ;
   size_t __guardsize ;
   int __stackaddr_set ;
   void *__stackaddr ;
   size_t __stacksize ;
};
typedef struct __pthread_attr_s pthread_attr_t;
typedef unsigned long pthread_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef __socklen_t socklen_t;
typedef unsigned short sa_family_t;
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
typedef uint16_t in_port_t;
typedef uint32_t in_addr_t;
struct in_addr {
   in_addr_t s_addr ;
};
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[(int )(((sizeof(struct sockaddr ) - sizeof(unsigned short )) -
                                  sizeof(in_port_t )) - sizeof(struct in_addr ))] ;
};
enum http_version;
typedef long long cpu_tick_t;
struct thread_args;
typedef struct thread_args thread_args;
struct thread_args {
   int id ;
   int s ;
};
typedef unsigned char PRUint8;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef long __suseconds_t;
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
typedef struct timezone * __restrict  __timezone_ptr_t;
extern int pthread_mutex_init(pthread_mutex_t * __restrict  __mutex , pthread_mutexattr_t const   * __restrict  __mutex_attr ) ;
extern int pthread_mutex_destroy(pthread_mutex_t *__mutex ) ;
extern int pthread_mutex_lock(pthread_mutex_t *__mutex ) ;
extern int pthread_mutex_unlock(pthread_mutex_t *__mutex ) ;
extern int open(char const   *__file , int __oflag  , ...) ;
extern void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern void free(void *__ptr ) ;
extern  __attribute__((__noreturn__)) void exit(int __status ) ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
extern int ( /* format attribute */  snprintf)(char * __restrict  __s , size_t __maxlen ,
                                               char const   * __restrict  __format 
                                               , ...) ;
extern void perror(char const   *__s ) ;
extern char *strdup(char const   *__s )  __attribute__((__malloc__)) ;
extern int __fxstat(int __ver , int __fildes , struct stat *__stat_buf ) ;
__inline static int fstat__extinline(int __fd , struct stat *__statbuf ) 
{ int tmp ;
  {
  tmp = __fxstat(3, __fd, __statbuf);
  return (tmp);
}
}
extern int close(int __fd ) ;
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
void cache_init(void) ;
cache_entry *cache_get(char *filename ) ;
void cache_entry_addref(cache_entry *entry ) ;
void cache_entry_release(cache_entry *entry ) ;
PLHashTable *PL_NewHashTable(PRUint32 n , PLHashNumber (*keyHash)(void const   *key ) ,
                             PRIntn (*keyCompare)(void const   *v1 , void const   *v2 ) ,
                             PRIntn (*valueCompare)(void const   *v1 , void const   *v2 ) ,
                             PLHashAllocOps const   *allocOps , void *allocPriv ) ;
PLHashEntry *PL_HashTableAdd(PLHashTable *ht , void const   *key , void *value ) ;
PRBool PL_HashTableRemove(PLHashTable *ht , void const   *key ) ;
void *PL_HashTableLookup(PLHashTable *ht , void const   *key ) ;
PLHashNumber PL_HashString(void const   *key ) ;
int PL_CompareStrings(void const   *v1 , void const   *v2 ) ;
int PL_CompareValues(void const   *v1 , void const   *v2 ) ;
void assert_failed(char *file , unsigned int line , char const   *func , char *expr ) ;
pthread_mutex_t g_cache_mutex ;
int g_cache_hits ;
int g_cache_misses ;
static PLHashTable *g_hash  =    (PLHashTable *)((void *)0);
static cache_entry *g_cache  =    (cache_entry *)((void *)0);
static cache_entry *g_cache_tail  =    (cache_entry *)((void *)0);
static int g_cache_max  =    536870912;
static int g_cache_cur  =    0;
static cache_entry *cache_new(char *filename ) 
{ struct cache_entry *presult ;
  struct cache_entry __attribute__((packed))* result ;
  int fd ;
  int tmp ;
  int ret ;
  struct stat fd_stat ;
  char *data ;
  size_t length ;
  int hdrlen ;
  int tmp___0 ;
  {
  presult = (cache_entry *)((void *)0);
  tmp = open((char const   *)filename, 0);
  fd = tmp;
  if (fd >= 0) {
    data = (char *)((void *)0);
    length = (size_t )0;
    hdrlen = 0;
    tmp___0 = fstat__extinline(fd, & fd_stat);
    if (tmp___0 < 0) {
      perror("fstat");
      exit(1);
    }
    if (! ((fd_stat.st_mode & 61440U) == 32768U)) {
      return ((cache_entry *)((void *)0));
    }
    length = (unsigned int )fd_stat.st_size;
    data = (char *)malloc(length + 128U);
    if (! ((unsigned int )data != (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 69U, "cache_new", (char *)"data != ((void *)0)");
    }
    hdrlen = snprintf((char * __restrict  )data, 128U, (char const   * __restrict  )"HTTP/1.1 200 OK\r\nContent-Type: %s\r\nContent-Length: %d\r\n\r\n",
                      "text/html", length);
    if (hdrlen < 0) {
      fprintf((FILE * __restrict  )stderr, (char const   * __restrict  )"header buffer exceeded\n");
      exit(1);
    } else {
      if (hdrlen >= 128) {
        fprintf((FILE * __restrict  )stderr, (char const   * __restrict  )"header buffer exceeded\n");
        exit(1);
      }
    }
    ret = read(fd, (void *)(data + hdrlen), length);
    if ((unsigned int )ret != length) {
      perror("read");
      fprintf((FILE * __restrict  )stderr, (char const   * __restrict  )"read failed - expected %d, but got %d\n",
              length, ret);
      close(fd);
      return ((cache_entry *)((void *)0));
    }
    result = (cache_entry __attribute__((packed)) *)malloc(sizeof((*result)));
    if (! ((unsigned int )result != (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 90U, "cache_new", (char *)"result != ((void *)0)");
    }
    result->filename = strdup((char const   *)filename);
    if (! ((unsigned int )result->filename != (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 93U, "cache_new", (char *)"result->filename != ((void *)0)");
    }
    result->data = data;
    result->total = (int )(length + (size_t )hdrlen);
    result->refs = 1;
    pthread_mutex_init((pthread_mutex_t * __restrict  )(& result->refs_mutex), (pthread_mutexattr_t const   * __restrict  )((void *)0));
    result->next = (cache_entry *)((void *)0);
    result->prev = (cache_entry *)((void *)0);
    close(fd);
    presult = pack(result);
  }
  return (presult);
}
}
static void cache_add(cache_entry *entry ) 
{ 
  cache_entry *gcache = g_cache;
  {
  if (! ((unsigned int )entry != (unsigned int )((void *)0))) {
    assert_failed((char *)"cache.c", 114U, "cache_add", (char *)"entry != ((void *)0)");
  }
  if ((unsigned int )gcache != (unsigned int )((void *)0)) {
    start_unpack(gcache);
    start_unpack(entry);
    if (! ((unsigned int )entry->next == (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 118U, "cache_add", (char *)"entry->next == ((void *)0)");
    }
    if (! ((unsigned int )entry->prev == (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 119U, "cache_add", (char *)"entry->prev == ((void *)0)");
    }
    if (! ((unsigned int )gcache->prev == (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 120U, "cache_add", (char *)"g_cache->prev == ((void *)0)");
    }
    end_unpack(gcache);
    entry->next = gcache;
    entry->prev = (cache_entry *)((void *)0);
    end_unpack(entry);
    start_unpack(gcache);
    gcache->prev = entry;
    end_unpack(gcache);
  }
  if ((unsigned int )g_cache_tail == (unsigned int )((void *)0)) {
    g_cache_tail = entry;
  }
  g_cache = entry;
  start_unpack(entry);
  g_cache_cur += entry->total;
  PL_HashTableAdd(g_hash, (void const   *)entry->filename, (void *)entry);
  end_unpack(entry);
  return;
}
}
static void cache_remove(cache_entry *entry ) 
{ 
  cache_entry *gcache = g_cache;
  cache_entry *gcache1, *gcache2;
  start_unpack(entry);
  start_unpack(gcache);
  {
  if (! ((unsigned int )entry != (unsigned int )((void *)0))) {
    assert_failed((char *)"cache.c", 145U, "cache_remove", (char *)"entry != ((void *)0)");
  }
  if ((unsigned int )g_cache == (unsigned int )entry) {
    g_cache_cur -= entry->total;
  } else {
    if ((unsigned int )entry->prev != (unsigned int )((void *)0)) {
      g_cache_cur -= entry->total;
    }
  }
  if ((unsigned int )gcache == (unsigned int )entry) {
    if (! ((unsigned int )gcache->prev == (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 155U, "cache_remove", (char *)"g_cache->prev == ((void *)0)");
    }
    g_cache = gcache->next;
  }
  gcache2=g_cache_tail;
  start_unpack(gcache2);
  if ((unsigned int )g_cache_tail == (unsigned int )entry) {
    if (! ((unsigned int )gcache2->next == (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 161U, "cache_remove", (char *)"g_cache_tail->next == ((void *)0)");
    }
    g_cache_tail = gcache2->prev;
  }
  end_unpack(gcache2);
  if ((unsigned int )entry->prev != (unsigned int )((void *)0)) {
    gcache1 = (entry->prev);
    start_unpack(gcache1);
    gcache1->next = entry->next;
    end_unpack(gcache1);
  }
  if ((unsigned int )entry->next != (unsigned int )((void *)0)) {
    gcache1 = (entry->next);
    start_unpack(gcache1);
    gcache1->prev = entry->prev;
    end_unpack(gcache1);
  }
  entry->prev = (cache_entry *)((void *)0);
  entry->next = (cache_entry *)((void *)0);
  PL_HashTableRemove(g_hash, (void const   *)entry->filename);
  end_unpack(gcache);
  end_unpack(entry);
  return;
}
}
static void cache_evict(void) 
{ cache_entry *remove___0 ;
  {
  while (g_cache_cur > g_cache_max) {
    remove___0 = g_cache_tail;
    if (! ((unsigned int )remove___0 != (unsigned int )((void *)0))) {
      assert_failed((char *)"cache.c", 189U, "cache_evict", (char *)"remove != ((void *)0)");
    }
    cache_remove(remove___0);
    cache_entry_release(remove___0);
  }
  return;
}
}
static cache_entry *cache_find(char *filename ) 
{ cache_entry *tmp ;
  {
  tmp = (cache_entry *)PL_HashTableLookup(g_hash, (void const   *)filename);
  return (tmp);
}
}
static void cache_use(cache_entry *entry ) 
{ 
  {
  if ((unsigned int )g_cache != (unsigned int )entry) {
    cache_remove(entry);
    cache_add(entry);
  }
  return;
}
}
static void cache_finish_get(cache_entry *entry ) 
{ 
  {
  cache_use(entry);
  cache_entry_addref(entry);
  cache_evict();
  return;
}
}
void cache_init(void) 
{ 
  {
  g_hash = PL_NewHashTable(100U, & PL_HashString, & PL_CompareStrings, & PL_CompareValues,
                           (PLHashAllocOps const   *)((void *)0), (void *)0);
  if (! ((unsigned int )g_hash != (unsigned int )((void *)0))) {
    assert_failed((char *)"cache.c", 230U, "cache_init", (char *)"g_hash != ((void *)0)");
  }
  return;
}
}
cache_entry *cache_get(char *filename ) 
{ cache_entry *result ;
  {
  result = (cache_entry *)((void *)0);
  pthread_mutex_lock(& g_cache_mutex);
  result = cache_find(filename);
  if ((unsigned int )result != (unsigned int )((void *)0)) {
    g_cache_hits ++;
    cache_finish_get(result);
  } else {
    g_cache_misses ++;
  }
  pthread_mutex_unlock(& g_cache_mutex);
  if ((unsigned int )result == (unsigned int )((void *)0)) {
    result = cache_new(filename);
    if ((unsigned int )result != (unsigned int )((void *)0)) {
      pthread_mutex_lock(& g_cache_mutex);
      cache_add(result);
      cache_finish_get(result);
      pthread_mutex_unlock(& g_cache_mutex);
    }
  }
  return (result);
}
}
void cache_entry_addref(cache_entry *entry ) 
{ 
  {
  if ((unsigned int )entry != (unsigned int )((void *)0)) {
    start_unpack(entry);
    pthread_mutex_lock(& entry->refs_mutex);
    entry->refs ++;
    pthread_mutex_unlock(& entry->refs_mutex);
    end_unpack(entry);
  }
  return;
}
}
void cache_entry_release(cache_entry *entry ) 
{ int refs ;
  {
  refs = 0;
  if ((unsigned int )entry != (unsigned int )((void *)0)) {
    start_unpack(entry);
    pthread_mutex_lock(& entry->refs_mutex);
    entry->refs --;
    refs = entry->refs;
    pthread_mutex_unlock(& entry->refs_mutex);
    if (refs == 0) {
      pthread_mutex_destroy(& entry->refs_mutex);
      free((void *)entry->filename);
      free((void *)entry->data);
      free((void *)entry);
      end_unpack(entry);
      entry = (cache_entry *)((void *)0);
    } else end_unpack(entry);
  }
  return;
}
}
int conf_no_debug  =    0;
extern  __attribute__((__noreturn__)) void __assert_fail(char const   *__assertion ,
                                                         char const   *__file , unsigned int __line ,
                                                         char const   *__function ) ;
extern char *strcpy(char * __restrict  __dest , char const   * __restrict  __src ) ;
extern int strcmp(char const   *__s1 , char const   *__s2 )  __attribute__((__pure__)) ;
extern char *strchr(char const   *__s , int __c )  __attribute__((__pure__)) ;
extern size_t strlen(char const   *__s )  __attribute__((__pure__)) ;
void input_init(input_state *state , int socket___0 ) ;
char *input_get_line(input_state *state ) ;
void http_init(http_request *request , int socket___0 ) ;
int http_parse(http_request *request ) ;
void http_init(http_request *request , int socket___0 ) 
{ 
  {
  request->url[0] = (char)0;
  request->version = 0;
  request->closed = 0;
  request->socket = socket___0;
  return;
}
}
int http_parse(http_request *request ) 
{ int result ;
  int done ;
  input_state state ;
  char *line ;
  char *tmp ;
  char *method ;
  char *url ;
  char *protocol ;
  http_version version ;
  int valid ;
  char *tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  size_t tmp___5 ;
  {
  result = 0;
  done = 0;
  input_init(& state, request->socket);
  request->url[0] = (char)0;
  request->version = 0;
  while (! done) {
    tmp = input_get_line(& state);
    line = tmp;
    if ((unsigned int )line == (unsigned int )((void *)0)) {
      request->closed = 1;
      result = 0;
      done = 1;
    } else {
      if ((int )(*(line + 0)) == 0) {
        result = (int )request->url[0] != 0;
        done = 1;
      } else {
        if ((int )request->url[0] == 0) {
          version = 0;
          valid = 0;
          method = line;
          url = strchr((char const   *)line, ' ');
          if ((unsigned int )url != (unsigned int )((void *)0)) {
            tmp___0 = url;
            url ++;
            (*tmp___0) = (char)0;
            protocol = strchr((char const   *)url, ' ');
            if ((unsigned int )protocol != (unsigned int )((void *)0)) {
              tmp___1 = protocol;
              protocol ++;
              (*tmp___1) = (char)0;
              tmp___4 = strcmp((char const   *)method, "GET");
              if (tmp___4 == 0) {
                tmp___3 = strcmp((char const   *)protocol, "HTTP/1.1");
                if (tmp___3 == 0) {
                  version = 1;
                  valid = 1;
                } else {
                  tmp___2 = strcmp((char const   *)protocol, "HTTP/1.0");
                  if (tmp___2 == 0) {
                    version = 0;
                    valid = 1;
                  }
                }
              }
            }
          }
          if (valid) {
            url --;
            if (! ((unsigned int )line <= (unsigned int )url)) {
              __assert_fail("line <= url", "http.c", 95U, "http_parse");
            }
            (*(url + 0)) = (char )'.';
            tmp___5 = strlen((char const   *)url);
            if (! (tmp___5 < sizeof(request->url))) {
              __assert_fail("strlen(url) < sizeof(request->url)", "http.c", 101U,
                            "http_parse");
            }
            strcpy((char * __restrict  )(request->url), (char const   * __restrict  )url);
            if (! ((int )request->url[0] == 46)) {
              __assert_fail("request->url[0] == \'.\'", "http.c", 103U, "http_parse");
            }
            request->version = version;
          } else {
            result = 0;
            done = 1;
          }
        }
      }
    }
  }
  return (result);
}
}
extern void *memmove(void *__dest , void const   *__src , size_t __n ) ;
extern char *strstr(char const   *__haystack , char const   *__needle )  __attribute__((__pure__)) ;
void input_init(input_state *state , int socket___0 ) 
{ 
  {
  if (! ((unsigned int )state != (unsigned int )((void *)0))) {
    __assert_fail("state != ((void *)0)", "input.c", 18U, "input_init");
  }
  state->used = 0;
  state->valid = 0;
  state->socket = socket___0;
  return;
}
}
char *input_get_line(input_state *state ) 
{ char *result ;
  int done ;
  char *start ;
  char *newline ;
  char *empty ;
  int n ;
  int tmp ;
  {
  result = (char *)((void *)0);
  done = 0;
  while (! done) {
    if (! (0 <= state->used)) {
      __assert_fail("0 <= state->used", "input.c", 38U, "input_get_line");
    }
    if (! (state->used <= state->valid)) {
      __assert_fail("state->used <= state->valid", "input.c", 39U, "input_get_line");
    }
    if (! (state->valid <= 511)) {
      __assert_fail("state->valid <= 511", "input.c", 40U, "input_get_line");
    }
    state->buf[state->valid] = (char)0;
    start = & state->buf[state->used];
    newline = strstr((char const   *)start, "\r\n");
    if ((unsigned int )newline != (unsigned int )((void *)0)) {
      (*newline) = (char)0;
      result = start;
      done = 1;
      state->used = (newline - state->buf) + 2;
      if (state->used == state->valid) {
        state->used = 0;
        state->valid = 0;
      }
    } else {
      if (state->valid < 511) {
        empty = & state->buf[state->valid];
        tmp = read(state->socket, (void *)empty, (unsigned int )(511 - state->valid));
        n = tmp;
        if (n <= 0) {
          result = (char *)((void *)0);
          done = 1;
        } else {
          state->valid = state->valid + n;
        }
      } else {
        if (state->used > 0) {
          memmove((void *)(& state->buf[0]), (void const   *)(& state->buf[state->used]),
                  (unsigned int )(state->valid - state->used));
          state->valid = state->valid - state->used;
          state->used = 0;
        } else {
          result = (char *)((void *)0);
          done = 1;
        }
      }
    }
  }
  return (result);
}
}
extern int sched_yield(void) ;
extern int pthread_create(pthread_t * __restrict  __threadp , pthread_attr_t const   * __restrict  __attr ,
                          void *(*__start_routine)(void * ) , void * __restrict  __arg ) ;
extern  __attribute__((__noreturn__)) void pthread_exit(void *__retval ) ;
extern int pthread_attr_init(pthread_attr_t *__attr ) ;
extern int pthread_attr_setdetachstate(pthread_attr_t *__attr , int __detachstate ) ;
extern int socket(int __domain , int __type , int __protocol ) ;
extern int bind(int __fd , struct sockaddr  const  *__addr , socklen_t __len ) ;
extern int setsockopt(int __fd , int __level , int __optname , void const   *__optval ,
                      socklen_t __optlen ) ;
extern int listen(int __fd , int __n ) ;
extern int accept(int __fd , struct sockaddr * __restrict  __addr , socklen_t * __restrict  __addr_len ) ;
extern uint16_t htons(uint16_t __hostshort )  __attribute__((__const__)) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern int atoi(char const   *__nptr )  __attribute__((__pure__)) ;
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
extern unsigned int sleep(unsigned int __seconds ) ;
extern int chdir(char const   *__path ) ;
extern int *__errno_location(void)  __attribute__((__const__)) ;
long long ticks_per_microsecond ;
__inline static long long current_usecs(void) 
{ register cpu_tick_t ret ;
  {
  __asm__  volatile   ("rdtsc": "=A" (ret));
  return (ret / ticks_per_microsecond);
}
}
int g_use_timer  =    1;
int g_spawn_on_demand  =    0;
static int g_use_cache  =    0;
static int g_force_thrashing  =    0;
pthread_mutex_t g_cache_mutex  ;
static int g_conn_open  =    0;
static int g_conn_fail  =    0;
static int g_conn_succeed  =    0;
static int g_conn_active  =    0;
int g_cache_hits  =    0;
int g_cache_misses  =    0;
long long g_bytes_sent  =    0LL;
static unsigned int g_timer_interval  =    5U;
int allow_file(char *file ) 
{ char *p ;
  int allow ;
  char *tmp ;
  char *tmp___0 ;
  {
  p = file;
  allow = 1;
  if ((int )(*(file + 0)) != 47) {
    allow = 0;
  }
  while (1) {
    if (allow) {
      if (! ((int )(*p) != 0)) {
        break;
      }
    } else {
      break;
    }
    if (97 <= (int )(*p)) {
      if (! ((int )(*p) <= 122)) {
        goto _L___1;
      }
    } else {
      _L___1: /* CIL Label */ 
      if (65 <= (int )(*p)) {
        if (! ((int )(*p) <= 90)) {
          goto _L___0;
        }
      } else {
        _L___0: /* CIL Label */ 
        if (48 <= (int )(*p)) {
          if (! ((int )(*p) <= 57)) {
            goto _L;
          }
        } else {
          _L: /* CIL Label */ 
          tmp = strchr("/._", (int )(*p));
          if (! ((unsigned int )tmp != (unsigned int )((void *)0))) {
            allow = 0;
          }
        }
      }
    }
    p ++;
  }
  if (allow) {
    tmp___0 = strstr((char const   *)file, "/.");
    if ((unsigned int )tmp___0 != (unsigned int )((void *)0)) {
      allow = 0;
    }
  }
  return (allow);
}
}
char *get_request_filename(http_request *request ) 
{ char *result ;
  int tmp ;
  int tmp___0 ;
  {
  result = (char *)((void *)0);
  tmp___0 = http_parse(request);
  if (tmp___0) {
    if (! request->closed) {
      if (! ((int )request->url[0] == 46)) {
        assert_failed((char *)"knot.c", 131U, "get_request_filename", (char *)"request->url[0] == \'.\'");
      }
      tmp = allow_file(request->url + 1);
      if (tmp) {
        result = request->url;
      }
    }
  }
  return (result);
}
}
int get_request_fd(http_request *request ) 
{ char *filename ;
  char *tmp ;
  int fd ;
  {
  tmp = get_request_filename(request);
  filename = tmp;
  fd = -1;
  if ((unsigned int )filename != (unsigned int )((void *)0)) {
    fd = open((char const   *)filename, 0);
  }
  return (fd);
}
}
int process_client_nocache(http_request *request , int client ) 
{ int fd ;
  int tmp ;
  int success ;
  char buf[8192] ;
  char *pos ;
  int n ;
  int ret ;
  int written ;
  {
  tmp = get_request_fd(request);
  fd = tmp;
  success = 1;
  if (fd >= 0) {
    n = 1;
    written = 0;
    while (n > 0) {
      n = read(fd, (void *)(buf), sizeof(buf));
      if (n < 0) {
        perror("read");
        success = 0;
        break;
      }
      pos = buf;
      while (n > 0) {
        ret = write(client, (void const   *)pos, (unsigned int )n);
        if (ret < 0) {
          perror("write");
          success = 0;
          break;
        } else {
          if (ret == 0) {
            n = 0;
            break;
          } else {
            written += ret;
            pos += ret;
            n -= ret;
          }
        }
      }
    }
    if (g_use_timer) {
      g_bytes_sent += (long long )written;
    }
    close(fd);
  }
  return (success);
}
}
cache_entry *get_request_entry(http_request *request ) 
{ char *filename ;
  char *tmp ;
  cache_entry *tmp___0 ;
  {
  tmp = get_request_filename(request);
  filename = tmp;
  if ((unsigned int )filename == (unsigned int )((void *)0)) {
    return ((cache_entry *)((void *)0));
  }
  tmp___0 = cache_get(filename);
  return (tmp___0);
}
}
int process_client_cache(http_request *request , int client ) 
{ int success ;
  cache_entry *entry ;
  ssize_t written ;
  int n ;
  char *p ;
  char *bigstuff ;
  int *tmp ;
  int *tmp___0 ;
  {
  success = 0;
  entry = get_request_entry(request);
  if ((unsigned int )entry != (unsigned int )((void *)0)) {
    written = 0;
    n = 0;
    bigstuff = (char *)((void *)0);
    if (g_force_thrashing) {
      bigstuff = (char *)malloc(734003200U);
      if (! bigstuff) {
        return (0);
      }
      p = (bigstuff + 734003200) - 3;
      while ((unsigned int )p > (unsigned int )bigstuff) {
        (*p) = (char)10;
        p -= 4096;
      }
      sched_yield();
      free((void *)bigstuff);
      bigstuff = (char *)((void *)0);
    }
    while (1) {
      start_unpack(entry);
      n = write(client, (void const   *)(entry->data + written), (unsigned int )(entry->total -
                                                                                 written));
      if (n > 0) {
        written += n;
        g_bytes_sent += (long long )n;
      }
      if (n > 0) {
        if (! (written < entry->total)) {
          break;
        }
      } else {
        break;
      }
      end_unpack(entry);
    }
    if (n < 0) {
      tmp = __errno_location();
      if ((*tmp) != 32) {
        tmp___0 = __errno_location();
        if ((*tmp___0) != 104) {
          perror("warning: write");
        }
      }
    }
    if (g_force_thrashing) {
      if (bigstuff) {
        free((void *)bigstuff);
      }
    }
    success = 1;
  }
  cache_entry_release(entry);
  return (success);
}
}
void process_client(int client ) 
{ http_request request ;
  int done ;
  int numrequests ;
  int success ;
  int tmp___1 ;
  int len ;
  int tmp___2 ;
  ssize_t tmp___3 ;
  {
  done = 0;
  numrequests = 0;
  http_init(& request, client);
  while (! done) {
    if (g_use_cache) {
      tmp___1 = process_client_cache(& request, client);
    } else {
      tmp___1 = process_client_nocache(& request, client);
    }
    success = tmp___1;
    if (success) {
      g_conn_succeed ++;
    } else {
      g_conn_fail ++;
    }
    numrequests ++;
    if (! success) {
      if (! request.closed) {
        tmp___2 = (int )strlen("HTTP/1.1 404 Not Found\r\nConnection: close\r\n");
        len = tmp___2;
        tmp___3 = write(client, (void const   *)"HTTP/1.1 404 Not Found\r\nConnection: close\r\n",
                        (unsigned int )len);
        if (! (tmp___3 != len)) {
          g_bytes_sent += (long long )len;
        }
      }
    }
    if (! success) {
      done = 1;
    } else {
      if ((int )request.version == 0) {
        done = 1;
      }
    }
  }
  if (numrequests > 1) {
    g_conn_fail --;
  }
  return;
}
}
void *thread_process_client(void *arg ) 
{ int c ;
  {
  c = (int )arg;
  process_client(c);
  g_conn_active --;
  close(c);
  return ((void *)0);
}
}
void accept_loop(int id , int s ) ;
static int attr_init_done  =    0;
static pthread_attr_t attr  ;
static pthread_t thread  ;
void accept_loop(int id , int s ) 
{ struct sockaddr_in caddr ;
  int len ;
  int c ;
  int optval ;
  int tmp ;
  int rv ;
  int tmp___0 ;
  {
  while (1) {
    len = (int )sizeof(caddr);
    c = 0;
    c = accept(s, (struct sockaddr * __restrict  )((struct sockaddr *)(& caddr)),
               (socklen_t * __restrict  )(& len));
    if (c < 0) {
      perror("accept");
      continue;
    }
    g_conn_open ++;
    g_conn_active ++;
    optval = 1;
    tmp = setsockopt(c, 6, 1, (void const   *)(& optval), sizeof(optval));
    if (tmp < 0) {
      perror("setsockopt");
      continue;
    }
    if (g_spawn_on_demand) {
      if (! attr_init_done) {
        pthread_attr_init(& attr);
        rv = pthread_attr_setdetachstate(& attr, 1);
        if (! (rv == 0)) {
          assert_failed((char *)"knot.c", 472U, "accept_loop", (char *)"rv == 0");
        }
        attr_init_done = 1;
      }
      tmp___0 = pthread_create((pthread_t * __restrict  )(& thread), (pthread_attr_t const   * __restrict  )(& attr),
                               & thread_process_client, (void * __restrict  )((void *)c));
      if (tmp___0 < 0) {
        g_conn_fail ++;
        g_conn_active --;
        close(c);
      }
    } else {
      process_client(c);
      close(c);
      g_conn_active --;
    }
  }
  return;
}
}
void *thread_main_autospawn(void *arg ) 
{ int s ;
  {
  s = (int )arg;
  accept_loop(-1, s);
  return ((void *)0);
}
}
void *thread_main(void *arg ) ;
void *thread_main(void *arg ) 
{ thread_args *targs ;
  int id ;
  int s ;
  {
  targs = (thread_args *)arg;
  id = targs->id;
  s = targs->s;
  free((void *)targs);
  accept_loop(id, s);
  return ((void *)0);
}
}
int main(int argc , char **argv ) 
{ struct sockaddr_in saddr ;
  int s ;
  int nthreads ;
  int i ;
  int val ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  uint16_t tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  pthread_t thread___0 ;
  int tmp___5 ;
  thread_args *targs ;
  pthread_t thread___1 ;
  int tmp___7 ;
  unsigned long long start ;
  unsigned long long now ;
  long long bytes_sent ;
  int conn_open ;
  int conn_succeed ;
  int conn_fail ;
  int conn_active ;
  int cache_hits ;
  int cache_misses ;
  {
  s = 0;
  nthreads = 0;
  i = 0;
  val = 1;
  if (argc != 3) {
    if (argc != 4) {
      fprintf((FILE * __restrict  )stderr, (char const   * __restrict  )"usage: %s port threads [root]\n",
              (*(argv + 0)));
      exit(1);
    }
  }
  if (argc == 4) {
    printf((char const   * __restrict  )"setting root directory to [%s]\n", (*(argv +
                                                                               3)));
    tmp = chdir((char const   *)(*(argv + 3)));
    if (tmp < 0) {
      perror("chdir");
      exit(1);
    }
  }
  pthread_mutex_init((pthread_mutex_t * __restrict  )(& g_cache_mutex), (pthread_mutexattr_t const   * __restrict  )((void *)0));
  cache_init();
  tmp___0 = strcmp((char const   *)(*(argv + 2)), "auto");
  if (tmp___0) {
    nthreads = atoi((char const   *)(*(argv + 2)));
    if (nthreads <= 0) {
      fprintf((FILE * __restrict  )stderr, (char const   * __restrict  )"nthreads should be > 0 or \'auto\'\n");
      exit(1);
    }
  } else {
    g_spawn_on_demand = 1;
  }
  s = socket(2, 1, 0);
  if (s < 0) {
    perror("socket");
    exit(1);
  }
  val = 1;
  tmp___1 = setsockopt(s, 1, 2, (void const   *)(& val), sizeof(val));
  if (tmp___1 < 0) {
    perror("setsockopt");
    exit(1);
  }
  saddr.sin_family = (unsigned short)2;
  tmp___2 = (uint16_t )atoi((char const   *)(*(argv + 1)));
  saddr.sin_port = htons(tmp___2);
  saddr.sin_addr.s_addr = 0U;
  tmp___3 = bind(s, (struct sockaddr  const  *)((struct sockaddr *)(& saddr)), sizeof(saddr));
  if (tmp___3 < 0) {
    perror("bind");
    exit(1);
  }
  tmp___4 = listen(s, 50000);
  if (tmp___4 < 0) {
    perror("listen");
    exit(1);
  }
  if (g_spawn_on_demand) {
    tmp___5 = pthread_create((pthread_t * __restrict  )(& thread___0), (pthread_attr_t const   * __restrict  )((void *)0),
                             & thread_main_autospawn, (void * __restrict  )((void *)s));
    if (tmp___5 < 0) {
      perror("pthread_create");
    }
  } else {
    printf((char const   * __restrict  )"Spawning %d threads....\n", nthreads);
    i = 0;
    while (i < nthreads) {
      targs = (thread_args *)((void *)0);
      targs = (thread_args *)malloc(sizeof((*targs)));
      if (! ((unsigned int )targs != (unsigned int )((void *)0))) {
        assert_failed((char *)"knot.c", 623U, "main", (char *)"targs != ((void *)0)");
      }
      targs->id = i;
      targs->s = s;
      tmp___7 = pthread_create((pthread_t * __restrict  )(& thread___1), (pthread_attr_t const   * __restrict  )((void *)0),
                               & thread_main, (void * __restrict  )((void *)targs));
      if (tmp___7 < 0) {
        perror("pthread_create");
      }
      i ++;
    }
    printf((char const   * __restrict  )"done\n");
  }
  if (g_use_timer) {
    start = (unsigned long long )current_usecs();
    sleep(g_timer_interval);
    while (1) {
      now = (unsigned long long )current_usecs();
      bytes_sent = g_bytes_sent;
      g_bytes_sent = 0LL;
      conn_open = g_conn_open;
      g_conn_open = 0;
      conn_succeed = g_conn_succeed;
      g_conn_succeed = 0;
      conn_fail = g_conn_fail;
      g_conn_fail = 0;
      conn_active = g_conn_active;
      cache_hits = g_cache_hits;
      g_cache_hits = 0;
      cache_misses = g_cache_misses;
      g_cache_misses = 0;
      printf((char const   * __restrict  )"rate: %.3g Mbits/sec   %.0f open/sec   %.0f succ/sec   %.0f fail/sec   active: %d   misses: %d   hitrate: %.1f%%   ",
             (((double )bytes_sent * (double )8) * (double )1000000) / ((double )(now -
                                                                                  start) *
                                                                        (double )1048576),
             ((double )conn_open * (double )1000000) / (double )(now - start), ((double )conn_succeed *
                                                                                (double )1000000) /
                                                                               (double )(now -
                                                                                         start),
             ((double )conn_fail * (double )1000000) / (double )(now - start), conn_active,
             cache_misses, ((double )100 * (double )cache_hits) / (double )(cache_hits +
                                                                            cache_misses));
      printf((char const   * __restrict  )"\n");
      start = now;
      sleep(g_timer_interval);
    }
  }
  pthread_exit((void *)0);
  return (0);
}
}
void PL_HashTableDestroy(PLHashTable *ht ) ;
void *PL_HashTableLookupConst(PLHashTable *ht , void const   *key ) ;
int PL_HashTableEnumerateEntries(PLHashTable *ht , PRIntn (*f)(PLHashEntry *he , PRIntn i ,
                                                               void *arg ) , void *arg ) ;
PLHashEntry **PL_HashTableRawLookup(PLHashTable *ht , PLHashNumber keyHash , void const   *key ) ;
PLHashEntry **PL_HashTableRawLookupConst(PLHashTable *ht , PLHashNumber keyHash ,
                                         void const   *key ) ;
PLHashEntry *PL_HashTableRawAdd(PLHashTable *ht , PLHashEntry **hep , PLHashNumber keyHash ,
                                void const   *key , void *value ) ;
void PL_HashTableRawRemove(PLHashTable *ht , PLHashEntry **hep , PLHashEntry *he ) ;
int PL_HashTableDump(PLHashTable *ht , PRIntn (*dump)(PLHashEntry *he , PRIntn i ,
                                                      void *arg ) , FILE *fp ) ;
