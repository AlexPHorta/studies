(defun compare (x y)
  (cond ((equal x y) 'numbers-are-the-same)
        ((< x y) 'first-is-smaller)
        ((> x y) 'first-is-bigger)))

(defun where-is (x)
  (cond ((equal x 'paris) 'france)
        ((equal x 'london) 'england)
        ((equal x 'beixing) 'china)
        (t 'unknown)))

(defun make-odd (x)
  (cond ((not (oddp x)) (+ x 1))
        (t x)))
