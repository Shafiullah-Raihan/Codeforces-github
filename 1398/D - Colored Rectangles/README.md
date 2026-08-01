<h2><a href="https://codeforces.com/contest/1398/problem/D" target="_blank" rel="noopener noreferrer">1398D — Colored Rectangles</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1398D](https://codeforces.com/contest/1398/problem/D) |

## Topics
`dp` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Colored Rectangles</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three multisets of pairs of colored sticks: </p><ul> <li> $$$R$$$ pairs of red sticks, the first pair has length $$$r_1$$$, the second pair has length $$$r_2$$$, $$$\dots$$$, the $$$R$$$-th pair has length $$$r_R$$$; </li><li> $$$G$$$ pairs of green sticks, the first pair has length $$$g_1$$$, the second pair has length $$$g_2$$$, $$$\dots$$$, the $$$G$$$-th pair has length $$$g_G$$$; </li><li> $$$B$$$ pairs of blue sticks, the first pair has length $$$b_1$$$, the second pair has length $$$b_2$$$, $$$\dots$$$, the $$$B$$$-th pair has length $$$b_B$$$; </li></ul><p>You are constructing rectangles from these pairs of sticks with the following process: </p><ol> <li> take a pair of sticks of one color; </li><li> take a pair of sticks of another color different from the first one; </li><li> add the area of the resulting rectangle to the total area. </li></ol><p>Thus, you get such rectangles that their opposite sides are the same color and their adjacent sides are not the same color.</p><p>Each pair of sticks can be used at most once, some pairs can be left unused. You are not allowed to split a pair into independent sticks.</p><p>What is the maximum area you can achieve?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three integers $$$R$$$, $$$G$$$, $$$B$$$ ($$$1 \le R, G, B \le 200$$$) — the number of pairs of red sticks, the number of pairs of green sticks and the number of pairs of blue sticks.</p><p>The second line contains $$$R$$$ integers $$$r_1, r_2, \dots, r_R$$$ ($$$1 \le r_i \le 2000$$$) — the lengths of sticks in each pair of red sticks.</p><p>The third line contains $$$G$$$ integers $$$g_1, g_2, \dots, g_G$$$ ($$$1 \le g_i \le 2000$$$) — the lengths of sticks in each pair of green sticks.</p><p>The fourth line contains $$$B$$$ integers $$$b_1, b_2, \dots, b_B$$$ ($$$1 \le b_i \le 2000$$$) — the lengths of sticks in each pair of blue sticks.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum possible total area of the constructed rectangles.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006691236253383843" id="id007870906747505308" class="input-output-copier">Copy</div></div><pre id="id006691236253383843">1 1 1
3
5
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003214403906621277" id="id009151927062118277" class="input-output-copier">Copy</div></div><pre id="id003214403906621277">20
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009951637488214895" id="id0024653740312123207" class="input-output-copier">Copy</div></div><pre id="id009951637488214895">2 1 3
9 5
1
2 8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0014227864856307526" id="id0002594935975012458" class="input-output-copier">Copy</div></div><pre id="id0014227864856307526">99
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016198681144068627" id="id001253281952107136" class="input-output-copier">Copy</div></div><pre id="id0016198681144068627">10 1 1
11 7 20 15 19 14 2 4 13 14
8
11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008511213782530994" id="id003269973856584426" class="input-output-copier">Copy</div></div><pre id="id008511213782530994">372
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example you can construct one of these rectangles: red and green with sides $$$3$$$ and $$$5$$$, red and blue with sides $$$3$$$ and $$$4$$$ and green and blue with sides $$$5$$$ and $$$4$$$. The best area of them is $$$4 \times 5 = 20$$$.</p><p>In the second example the best rectangles are: red/blue $$$9 \times 8$$$, red/blue $$$5 \times 5$$$, green/blue $$$2 \times 1$$$. So the total area is $$$72 + 25 + 2 = 99$$$.</p><p>In the third example the best rectangles are: red/green $$$19 \times 8$$$ and red/blue $$$20 \times 11$$$. The total area is $$$152 + 220 = 372$$$. Note that you can't construct more rectangles because you are not allowed to have both pairs taken to be the same color.</p></div>