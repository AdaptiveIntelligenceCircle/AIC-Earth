# Security Policy

## Scope of Security in AIC

Security in AIC is not limited to technical vulnerabilities.

We explicitly consider the following as security risks:
- Irreversible social influence
- Silent large-scale behavioral manipulation
- Trust centralization or capture
- Removal or bypass of rollback mechanisms
- Architectural paths that enable monopoly or coercion

A system can be technically correct and still be insecure.

---

## What to Report

Please report issues that involve:
- Circumventing rollback, human override, or trust constraints
- Creating hidden enforcement or control paths
- Introducing irreversible decision logic
- Scaling mechanisms without explicit constraints
- Code that removes transparency or auditability

---

## What Is NOT a Security Issue

The following are NOT considered security issues:
- Performance limitations
- Lack of automation
- Missing optimization
- Deliberate friction or slowness by design

AIC intentionally prioritizes restraint over speed.

---

## Reporting Process

If you believe you have found a security concern:
- Do NOT publish exploits or proof-of-concept publicly
- Do NOT attempt to weaponize or dramatize the issue

Instead, open a **private security report** or contact the maintainers
with a clear explanation of:
- What is at risk
- At what scale
- Under what assumptions

---

## Disclosure Philosophy

AIC does not rush disclosure.

Security fixes may be:
- Delayed
- Discussed publicly
- Rejected intentionally

If a proposed “fix” increases centralization or power asymmetry,
it may be refused even if it removes a vulnerability.

---

## Final Note

In AIC, the most dangerous vulnerabilities are not crashes —
they are paths to irreversible control.

Security is about preventing those paths.
