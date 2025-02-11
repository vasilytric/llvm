// RUN: %clang -target x86_64-unknown-unknown -ccc-print-phases -extract-api %s 2> %t
// RUN: echo 'END' >> %t
// RUN: FileCheck -check-prefix EXTRACT-API-PHASES -input-file %t %s

// EXTRACT-API-PHASES: 0: input,
// EXTRACT-API-PHASES: , c
// EXTRACT-API-PHASES: 1: preprocessor, {0}, cpp-output
// EXTRACT-API-PHASES: 2: compiler, {1}, api-information
// EXTRACT-API-PHASES-NOT: 3:
// EXTRACT-API-PHASES: END
