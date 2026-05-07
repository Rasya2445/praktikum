import string
from collections import Counter

def normalize_text(text):
    # lowercase
    text = text.lower()

    # hapus tanda baca
    text = text.translate(str.maketrans('', '', string.punctuation))

    # hapus spasi berlebih
    text = ' '.join(text.split())

    return text


def word_count(text):
    text = normalize_text(text)
    words = text.split()
    return len(words)


def top_n_words(text, n=3):
    text = normalize_text(text)
    words = text.split()

    counter = Counter(words)

    return counter.most_common(n)