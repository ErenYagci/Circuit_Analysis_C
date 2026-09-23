# Circuit Analysis Basics in C

I created this repository while learning both the fundamentals of **Electric Circuit Theory** and programming in **C**. My goal is to implement standard circuit calculations step by step into simple, standalone C scripts and practice using Git/GitHub along the way.

## What's Inside?

Here are the basic scripts I have implemented so far:

* **`Ohms_Law.c`**: Calculates voltage using Ohm's Law ($V = I \cdot R$) given current and resistance.
* **`Power_Calc.c`**: Finds the dissipated power ($P = V \cdot I$) across a component.
* **`Voltage_Divider.c`**: Solves the voltage drop across a specific resistor in a two-resistor divider circuit.
* **`Equivalent_Resistance.c`**: Calculates total equivalent resistance ($R_{eq}$) for resistors connected in series and in parallel.
* **`Current_Divider.c`**: Computes the branch current in parallel configurations using the current divider rule.
* **`Capacitor_Eq.c`**: Finds equivalent capacitance ($C_{eq}$) for series and parallel capacitor arrangements.

## Git & GitHub Workflow Practices

Beyond circuit theory, this repository served as a playground to learn version control fundamentals:
* Initializing repositories, configuring remotes, and managing commits.
* Setting up `.gitignore` to keep executable build artifacts (`.exe`) out of the repository.
* Branching and switching (`git checkout -b` / `git switch`) to build features in isolation.
* Merging branches locally (`git merge`) and managing upstream remotes (`git push -u`).
* Creating and merging Pull Requests (PR) directly on GitHub.
