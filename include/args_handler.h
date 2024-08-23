/**
 * @file args_handler.h
 */

#ifndef ARGS_HANDLER_H
#define ARGS_HANDLER_H

/// Checking for valid argument
typedef enum __ARGS {
    GOOD = 1, ///< Was at least one valid argument
    BAD  = 0, ///< No valid arguments
} ARGS_STATUS;

void        HandleArgs    (int argc, char *argv[]);
ARGS_STATUS SolveFromArgs (char *argv[]);

#endif
