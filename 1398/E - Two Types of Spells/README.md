<h2><a href="https://codeforces.com/contest/1398/problem/E" target="_blank" rel="noopener noreferrer">1398E — Two Types of Spells</a></h2>

| | |
|---|---|
| **Difficulty** | 2200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1398E](https://codeforces.com/contest/1398/problem/E) |

## Topics
`binary search` `data structures` `greedy` `implementation` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">E. Two Types of Spells</div><div class="time-limit"><div class="property-title">time limit per test</div>3.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp plays a computer game (yet again). In this game, he fights monsters using magic spells.</p><p>There are two types of spells: <span class="tex-font-style-it">fire</span> spell of power $$$x$$$ deals $$$x$$$ damage to the monster, and <span class="tex-font-style-it">lightning</span> spell of power $$$y$$$ deals $$$y$$$ damage to the monster and <span class="tex-font-style-bf">doubles</span> the damage of the next spell Polycarp casts. Each spell can be cast <span class="tex-font-style-bf">only once per battle</span>, but Polycarp can cast them in any order.</p><p>For example, suppose that Polycarp knows three spells: a fire spell of power $$$5$$$, a lightning spell of power $$$1$$$, and a lightning spell of power $$$8$$$. There are $$$6$$$ ways to choose the order in which he casts the spells:</p><ul> <li> first, second, third. This order deals $$$5 + 1 + 2 \cdot 8 = 22$$$ damage; </li><li> first, third, second. This order deals $$$5 + 8 + 2 \cdot 1 = 15$$$ damage; </li><li> second, first, third. This order deals $$$1 + 2 \cdot 5 + 8 = 19$$$ damage; </li><li> second, third, first. This order deals $$$1 + 2 \cdot 8 + 2 \cdot 5 = 27$$$ damage; </li><li> third, first, second. This order deals $$$8 + 2 \cdot 5 + 1 = 19$$$ damage; </li><li> third, second, first. This order deals $$$8 + 2 \cdot 1 + 2 \cdot 5 = 20$$$ damage. </li></ul><p>Initially, Polycarp knows $$$0$$$ spells. His spell set changes $$$n$$$ times, each time he either learns a new spell or forgets an already known one. After each change, calculate the maximum possible damage Polycarp may deal using the spells he knows.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of changes to the spell set.</p><p>Each of the next $$$n$$$ lines contains two integers $$$tp$$$ and $$$d$$$ ($$$0 \le tp_i \le 1$$$; $$$-10^9 \le d \le 10^9$$$; $$$d_i \neq 0$$$) — the description of the change. If $$$tp_i$$$ if equal to $$$0$$$, then Polycarp learns (or forgets) a fire spell, otherwise he learns (or forgets) a lightning spell.</p><p>If $$$d_i  \gt  0$$$, then Polycarp learns a spell of power $$$d_i$$$. Otherwise, Polycarp forgets a spell with power $$$-d_i$$$, and it is guaranteed that he knew that spell before the change.</p><p>It is guaranteed that the powers of all spells Polycarp knows after each change are different (Polycarp never knows two spells with the same power).</p></div><div class="output-specification"><div class="section-title">Output</div><p>After each change, print the maximum damage Polycarp can deal with his current set of spells.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004184679995124404" id="id0024487913541819162" class="input-output-copier">Copy</div></div><pre id="id004184679995124404">6
1 5
0 10
1 -5
0 5
1 11
0 -10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008179628676492661" id="id0049038195615911795" class="input-output-copier">Copy</div></div><pre id="id008179628676492661">5
25
10
15
36
21
</pre></div></div></div>