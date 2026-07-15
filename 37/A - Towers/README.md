<h2><a href="https://codeforces.com/contest/37/problem/A" target="_blank" rel="noopener noreferrer">37A — Towers</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 37A](https://codeforces.com/contest/37/problem/A) |

## Topics
`sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Towers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Little Vasya has received a young builder’s kit. The kit consists of several wooden bars, the lengths of all of them are known. The bars can be put one on the top of the other if their lengths are the same.</p><p>Vasya wants to construct the minimal number of towers from the bars. Help Vasya to use the bars in the best way possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer <span class="tex-span"><i>N</i></span> (<span class="tex-span">1 ≤ <i>N</i> ≤ 1000</span>) — the number of bars at Vasya’s disposal. The second line contains <span class="tex-span"><i>N</i></span> space-separated integers <span class="tex-span"><i>l</i><sub class="lower-index"><i>i</i></sub></span> — the lengths of the bars. All the lengths are natural numbers not exceeding <span class="tex-span">1000</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In one line output two numbers — the height of the largest tower and their total number. Remember that Vasya should use all the bars.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007290061378695762" id="id008345095594323949" class="input-output-copier">Copy</div></div><pre id="id007290061378695762">3<br>1 2 3<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008686518259700875" id="id004521896918936621" class="input-output-copier">Copy</div></div><pre id="id008686518259700875">1 3<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009268469267434603" id="id002916976960828318" class="input-output-copier">Copy</div></div><pre id="id009268469267434603">4<br>6 5 6 7<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009415202483490357" id="id00022644829572855185" class="input-output-copier">Copy</div></div><pre id="id009415202483490357">2 3<br></pre></div></div></div>