;; The first three lines of this file were inserted by DrRacket. They record metadata
;; about the language level of this file in a form that our tools can easily process.
#reader(lib "htdp-beginner-reader.ss" "lang")((modname pluralize) (read-case-sensitive #t) (teachpacks ()) (htdp-settings #(#t constructor repeating-decimal #f #t none #f () #f)))
; Signature
; String -> String

; Purpose
; The function consumes a string and returns the plural of it.

; Stub
; (define (pluralize s) "plurals")

; Examples
(check-expect (pluralize "egg") "eggs")
(check-expect (pluralize "kid") "kids")

; Template and Inventory
; (define (pluralize s)
;   (... s))

(define (pluralize s)
  (string-append s "s"))