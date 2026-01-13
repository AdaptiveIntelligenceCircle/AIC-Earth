# Contributing to AIC

## Before You Contribute

Please understand that AIC prioritizes:
- Long-term safety over short-term capability
- Constraint over convenience
- Simulation over deployment
- Reversibility over optimization

If your goal is to:
- Build fast
- Scale aggressively
- Automate human judgment

This project may not align with your expectations.

---

## Types of Contributions We Value

We welcome:
- Architectural critique
- Threat modeling
- Simulation scenarios
- Documentation that clarifies limits and non-goals
- Tests that fail when rollback or human override is removed

Code is not the highest form of contribution.

---

## Contribution Guidelines

When submitting a contribution:
- Clearly state the assumptions
- Explain potential failure modes
- Describe rollback paths
- Identify trust implications
- Justify why this does NOT increase centralization

Pull requests without these explanations may be rejected.

---

## What Will Likely Be Rejected

- Code that increases system autonomy without constraints
- Optimizations that remove friction intentionally added
- Features that bypass human review
- Hidden global state or control mechanisms
- “Just trust the AI” logic

Rejection is not personal.
It is architectural.

---

## Review Process

Reviews may be:
- Slow
- Demanding
- Philosophical

This is intentional.

AIC does not optimize for contributor happiness.
It optimizes for not becoming dangerous.

---

## Final Note

Contributing to AIC means helping build a system
that knows when **not** to act.

That is harder than it sounds.
