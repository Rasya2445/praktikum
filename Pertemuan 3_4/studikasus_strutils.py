import string
from collections import Counter

def normalize_text(text):
    text = text.lower()
    text = text.translate(str.maketrans('', '', string.punctuation))
    text = ' '.join(text.split())
    return text

def word_count(text):
    words = normalize_text(text).split()
    return len(words)

def top_n_words(text, n=10):
    words = normalize_text(text).split()
    counter = Counter(words)
    return counter.most_common(n)