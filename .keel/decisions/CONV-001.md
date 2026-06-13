---
id: CONV-001
type: convention
title: C99 standard with strict warnings
status: accepted
source: ai-drafted
applies_to:
  - "*.c"
  - Makefile
provenance:
  signals:
    - kind: file
      ref: Makefile
  model: claude-sonnet-4-6
  confidence: 0.97
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

All C source files must be compiled with -std=c99 -Werror -Wall flags
