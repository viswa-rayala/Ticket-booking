# Bus Ticket Booking System

A simple C program that manages bus ticket bookings with a fixed-size queue. Passengers are stored in first-in, first-out (FIFO) order so tickets can be processed in booking order.

## Features

- Add a passenger and ticket number to the queue.
- Process the next ticket in the queue.
- View the next ticket available for processing.
- Display all passengers currently in the queue.
- Exit through an interactive menu.
- Limit the queue to 10 passengers.

## Requirements

- A C compiler such as GCC.
- A terminal or command prompt.

## Build and Run

From the project directory, compile the program with:

```bash
gcc -Wall -Wextra -std=c11 ticket.c -o ticket
```

Run it with:

```bash
./ticket
```

On Windows, run the generated executable with:

```text
ticket.exe
```

## Menu Options

```text
1. Add new passenger to the Queue.
2. Process Ticket in the Queue.
3. View next Ticket in the Queue.
4. Show all Tickets in the Queue.
5. Exit the Queue.
```

When adding a passenger, enter a name without spaces and an integer ticket number. The queue can contain up to 10 passengers.

## Implementation Details

- `passengers` stores a passenger name and ticket number.
- `queue` is a static array with a capacity of 10 entries.
- `enqueue()` adds a booking to the queue.
- `dequeue()` processes a booking and advances the front position.
- `view()` prints all currently queued passengers.
- `front` and `rear` track the active queue positions.

## Project Files

| File | Description |
| --- | --- |
| `ticket.c` | Source code for the ticket booking queue. |
| `README.md` | Project documentation. |
