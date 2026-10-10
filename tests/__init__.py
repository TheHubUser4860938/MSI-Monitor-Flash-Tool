"""Unit tests: monitor-free, stdlib-only (python3 -m unittest discover).

Everything hardware-bound lives outside: kernel/test_relay.py (module) and
the live regressions in STATUS.md. These tests pin the protocol SHAPES —
codecs, state machines, framing, locking — against recorded ground truth.
"""
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
