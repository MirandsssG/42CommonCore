*This project has been created as part of the 42 curriculum by dluis-ma*

# Philosophers


## Description

**Philosophers** is a concurrency project based on the classic "Dining Philosophers" problem, developed as part of the 42 curriculum.
The goal of this project is to simulate a group of philosophers who alternate between **thinking** and **eating**, while safely sharing **forks** (resources) without causing **deadlocks** or **data races**.

The project emphasizes low-level programming and synchronization concepts, including:
- Thread management using **POSIX threads (pthreads)**
- Mutual exclusion with **mutexes**
- Timing and monitoring with `gettimeofday`
- Deadlock avoidance strategies
- Concurrency logic and resource sharing

This project provides a deeper understanding of **concurrent programming** and the challenges of **thread synchronization** in C.


---


## Instructions

### Compilation


To compile the project, run:
```bash
 make
```
This will generate the executable:
```bash
./philo
```


---


### Execution

Launch philosophers by running:
```bash
./philo number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]
```

number_of_philosophers – total philosophers at the table

time_to_die – maximum time (ms) a philosopher can go without eating before dying

time_to_eat – time (ms) a philosopher spends eating

time_to_sleep – time (ms) a philosopher spends sleeping

number_of_times_each_philosopher_must_eat (optional) – simulation stops after each philosopher eats this many times


---


### Usage Examples

```bash
./philo 5 800 200 200
# Starts a simulation with 5 philosophers

./philo 5 800 200 200 7
# Stops after each philosopher has eaten 7 times
```


---


## Resources
### Documentation & References

Dining Philosophers Wikipedia: https://en.wikipedia.org/wiki/Dining_philosophers_problem

pthread_create man: https://linux.die.net/man/3/pthread_create

pthread mutex lock man: https://man7.org/linux/man-pages/man3/pthread_mutex_lock.3p.html

pthread mutex destroy man: https://man7.org/linux/man-pages/man3/pthread_mutex_destroy.3p.html

get time of day man: https://man7.org/linux/man-pages/man2/gettimeofday.2.html


## AI Usage

AI tools were used as a support resource during the development of this project, primarily for:

- Clarifying concurrency concepts such as threads, mutexes, deadlocks, and data races  
- Understanding synchronization strategies and timing mechanisms  
- Drafting pseudocode for philosopher routines and simulation flow  
- Reviewing logic to avoid deadlocks and ensure proper resource management

All design decisions, implementation, and final code were written and validated by the project author, in compliance with the 42 rules regarding academic integrity.
