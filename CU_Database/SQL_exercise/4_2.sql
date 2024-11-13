SELECT postal_code, COUNT(*) AS customer_numbers
FROM CUSTOMER
GROUP BY postal_code
HAVING COUNT(*) > 1
ORDER BY customer_numbers DESC;
