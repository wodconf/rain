/*
 * rain_mutex.h
 *
 *  Created on: 2012-11-9
 *      Author: goalworld
 */

#ifndef RAIN_MUTEX_H_
#define RAIN_MUTEX_H_
#ifdef __GNUC__

typedef int rainMutex;

#define rainMutexInit( mtx )	*(mtx) = 0;
#define rainMutexLock( mtx )	while(__sync_lock_test_and_set((mtx),1)){;}
#define rainMutexUnLock( mtx )__sync_lock_release ((mtx),0);


#endif
#endif /* RAIN_MUTEX_H_ */
