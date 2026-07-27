<h2><a href="https://codeforces.com/contest/1584/problem/A" target="_blank" rel="noopener noreferrer">1584A — Mathematical Addition</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1584A](https://codeforces.com/contest/1584/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Mathematical Addition</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ivan decided to prepare for the test on solving integer equations. He noticed that all tasks in the test have the following form:</p><ul> <li> You are given two positive integers $$$u$$$ and $$$v$$$, find any pair of integers (<span class="tex-font-style-bf">not necessarily positive</span>) $$$x$$$, $$$y$$$, such that: $$$$$$\frac{x}{u} + \frac{y}{v} = \frac{x + y}{u + v}.$$$$$$ </li><li> The solution $$$x = 0$$$, $$$y = 0$$$ is forbidden, so you should find any solution with $$$(x, y) \neq (0, 0)$$$. </li></ul><p>Please help Ivan to solve some equations of this form.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases. The next lines contain descriptions of test cases.</p><p>The only line of each test case contains two integers $$$u$$$ and $$$v$$$ ($$$1 \leq u, v \leq 10^9$$$) — the parameters of the equation.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print two integers $$$x$$$, $$$y$$$ — a possible solution to the equation. It should be satisfied that $$$-10^{18} \leq x, y \leq 10^{18}$$$ and $$$(x, y) \neq (0, 0)$$$.</p><p>We can show that an answer always exists. If there are multiple possible solutions you can print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005120741553247644" id="id0016651571519297237" class="input-output-copier">Copy</div></div><pre id="id005120741553247644">4
1 1
2 3
3 5
6 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022134147894449607" id="id009983538598447259" class="input-output-copier">Copy</div></div><pre id="id0022134147894449607">-1 1
-4 9
-18 50
-4 9
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case: $$$\frac{-1}{1} + \frac{1}{1} = 0 = \frac{-1 + 1}{1 + 1}$$$.</p><p>In the second test case: $$$\frac{-4}{2} + \frac{9}{3} = 1 = \frac{-4 + 9}{2 + 3}$$$.</p><p>In the third test case: $$$\frac{-18}{3} + \frac{50}{5} = 4 = \frac{-18 + 50}{3 + 5}$$$.</p><p>In the fourth test case: $$$\frac{-4}{6} + \frac{9}{9} = \frac{1}{3} = \frac{-4 + 9}{6 + 9}$$$.</p></div>