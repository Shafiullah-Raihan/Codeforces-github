<h2><a href="https://codeforces.com/contest/22/problem/D" target="_blank" rel="noopener noreferrer">22D — Segments</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 22D](https://codeforces.com/contest/22/problem/D) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Segments</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You are given <span class="tex-span"><i>n</i></span> segments on the Ox-axis. You can drive a nail in any integer point on the Ox-axis line nail so, that all segments containing this point, are considered nailed down. If the nail passes through endpoint of some segment, this segment is considered to be nailed too. What is the smallest number of nails needed to nail all the segments down?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains single integer number <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 1000</span>) — amount of segments. Following <span class="tex-span"><i>n</i></span> lines contain descriptions of the segments. Each description is a pair of integer numbers — endpoints coordinates. All the coordinates don't exceed 10000 by absolute value. Segments can degenarate to points.</p></div><div class="output-specification"><div class="section-title">Output</div><p>The first line should contain one integer number — the smallest number of nails needed to nail all the segments down. The second line should contain coordinates of driven nails separated by space in any order. If the answer is not unique, output any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0037524051678510373" id="id008887857181377502" class="input-output-copier">Copy</div></div><pre id="id0037524051678510373">2<br>0 2<br>2 5<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006476530440342203" id="id007442538876430864" class="input-output-copier">Copy</div></div><pre id="id006476530440342203">1<br>2 </pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006058196184200121" id="id007763812985018181" class="input-output-copier">Copy</div></div><pre id="id006058196184200121">5<br>0 3<br>4 2<br>4 8<br>8 10<br>7 7<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004373194782084051" id="id0028867456857908635" class="input-output-copier">Copy</div></div><pre id="id004373194782084051">3<br>7 10 3<br></pre></div></div></div>