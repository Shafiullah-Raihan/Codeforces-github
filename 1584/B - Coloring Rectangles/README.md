<h2><a href="https://codeforces.com/contest/1584/problem/B" target="_blank" rel="noopener noreferrer">1584B — Coloring Rectangles</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1584B](https://codeforces.com/contest/1584/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Coloring Rectangles</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>David was given a <span class="tex-font-style-bf">red</span> checkered rectangle of size $$$n \times m$$$. But he doesn't like it. So David cuts the original or any other rectangle piece obtained during the cutting into two new pieces along the grid lines. He can do this operation as many times as he wants.</p><p>As a result, he will get a set of rectangles. Rectangles $$$1 \times 1$$$ are <span class="tex-font-style-bf">forbidden</span>.</p><p>David also knows how to paint the cells <span class="tex-font-style-bf">blue</span>. He wants each rectangle from the resulting set of pieces to be colored such that any pair of adjacent cells by side (from the same piece) have different colors.</p><p>What is the minimum number of cells David will have to paint?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases. The next lines contain descriptions of test cases.</p><p>The only line of each test case contains two integers $$$n$$$, $$$m$$$ ($$$1 \leq n, m \leq 3 \cdot 10^4$$$, $$$n \cdot m \geq 2$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print a single integer — the minimum number of cells David will have to paint blue.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014942049916139055" id="id009901750161830023" class="input-output-copier">Copy</div></div><pre id="id0014942049916139055">4
1 3
2 2
2 5
3 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008383117891768671" id="id007850068922722393" class="input-output-copier">Copy</div></div><pre id="id008383117891768671">1
2
4
5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The following pictures show how the initial rectangle can be split and cells colored blue.</p><p>In the first test case:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d7f5d749e9dc65bd3e86fb1061504752ba2d7d2b.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the second test case:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/ee7607269fa0867cd41d5b715444d7e3fffde8de.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the third test case:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/e6ebbc36c039854851104a1e0a426710825c2a7c.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the fourth test case:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/d23a2d8ccaf8f103aebe6c45de134a204ee23c38.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>