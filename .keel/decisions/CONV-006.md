---
id: CONV-006
type: convention
title: Output diffed against solution file for testing
status: accepted
source: ai-drafted
applies_to:
  - test.sh
provenance:
  signals:
    - kind: file
      ref: test.sh
  model: claude-sonnet-4-6
  confidence: 0.97
---

## Context

Extracted by Keel's first-connect analysis of ThomasPritchard/BST from the files cited in provenance.

## Decision

Test correctness is verified by redirecting stdout to out.txt and diffing case-insensitively against sol.txt using 'diff -iad'
