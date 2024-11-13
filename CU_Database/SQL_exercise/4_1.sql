SELECT postal_code, COUNT(*) AS customer_count
FROM CUSTOMER
GROUP BY postal_code
ORDER BY customer_count DESC;
