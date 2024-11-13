WITH CUSTOMER_COUNT(customer_id, order_count) AS (
	SELECT customer_id, COUNT(order_id) FROM ORDERT
	GROUP BY customer_id
)

SELECT customer_id, customer_name, order_count FROM CUSTOMER_COUNT
NATURAL JOIN CUSTOMER
ORDER BY order_count DESC
LIMIT 3;