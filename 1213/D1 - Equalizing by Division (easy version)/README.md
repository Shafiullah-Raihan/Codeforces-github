<h2><a href="https://codeforces.com/contest/1213/problem/D1" target="_blank" rel="noopener noreferrer">1213D1 — Equalizing by Division (easy version)</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1213D1](https://codeforces.com/contest/1213/problem/D1) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D1. Equalizing by Division (easy version)</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-bf">The only difference between easy and hard versions is the number of elements in the array</span>.</p><p>You are given an array $$$a$$$ consisting of $$$n$$$ integers. In one move you can choose any $$$a_i$$$ and divide it by $$$2$$$ rounding down (in other words, in one move you can set $$$a_i := \lfloor\frac{a_i}{2}\rfloor$$$).</p><p>You can perform such an operation <span class="tex-font-style-bf">any</span> (possibly, zero) number of times with <span class="tex-font-style-bf">any</span> $$$a_i$$$.</p><p>Your task is to calculate the minimum possible number of operations required to obtain at least $$$k$$$ equal numbers in the array.</p><p><span class="tex-font-style-bf">Don't forget that it is possible to have $$$a_i = 0$$$ after some operations, thus the answer always exists</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 50$$$) — the number of elements in the array and the number of equal numbers required.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 2 \cdot 10^5$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum possible number of operations required to obtain at least $$$k$$$ equal numbers in the array.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0028759336680566416" id="id009922188131359384" class="input-output-copier">Copy</div></div><pre id="id0028759336680566416">5 3
1 2 2 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006870261965197954" id="id0039615376485366716" class="input-output-copier">Copy</div></div><pre id="id006870261965197954">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002178054432648978" id="id002430063934937685" class="input-output-copier">Copy</div></div><pre id="id002178054432648978">5 3
1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005391352328826722" id="id009225178338936448" class="input-output-copier">Copy</div></div><pre id="id005391352328826722">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005097697685485308" id="id0010569339835085168" class="input-output-copier">Copy</div></div><pre id="id005097697685485308">5 3
1 2 3 3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003524578022630823" id="id007013050903936494" class="input-output-copier">Copy</div></div><pre id="id003524578022630823">0
</pre></div></div></div>